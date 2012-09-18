// Ces programmes sont sous licence CeCILL-B V1.
//----------------------------------------------------------------------
//                       Isn.java
//----------------------------------------------------------------------
// Julien Cervelle et Gilles Dowek

import java.awt.*;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintStream;
import java.io.Reader;
import java.io.StringReader;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.util.Locale;
import java.util.Scanner;
import java.util.regex.Pattern;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.awt.geom.Path2D;
import java.awt.geom.Rectangle2D;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.CopyOnWriteArrayList;
import javax.swing.JComponent;
import javax.swing.JFrame;
import javax.swing.plaf.ComponentUI;
import java.io.FileInputStream;
import java.io.FileOutputStream;

class Isn {

//----------------------------------------------------------------------
//                       graphisme
//----------------------------------------------------------------------

  private static class IsnUI extends ComponentUI {

    static final IsnUI INSTANCE = new IsnUI();

    @Override
    public void paint(Graphics g, JComponent c) {
      ConcurrentLinkedQueue<Entry> items = ((JIsn)c).items;
      Graphics2D gg = (Graphics2D)g.create();
      try {
        for(Entry entry:items)
        entry.draw(gg);}
      finally {
        gg.dispose();}}}

  private static class Entry {
    private final Shape shape;
    private final Color foreground,background;
    Entry(Shape shape, Color foreground, Color background) {
      this.shape = shape;
      this.foreground = foreground;
      this.background = background;}

  void draw(Graphics2D gg) {
    if (background!=null) {
      gg.setColor(background);
      gg.fill(shape);}
    if (foreground!=null) {
      gg.setColor(foreground);
      gg.draw(shape);}}}
 
  private static class JIsn extends JComponent {

    ConcurrentLinkedQueue<Entry> items = new ConcurrentLinkedQueue<Entry>();

    JIsn(int width, int height) {
      setUI(IsnUI.INSTANCE);
      setPreferredSize(new Dimension(width,height));}

    public void add(Shape shape, Color foreground, Color background) {
      items.add(new Entry(shape,foreground,background));
      repaint();}

    public void clear() {
      items.clear();
      repaint();}}

  static JIsn component = null;

  public static void initDrawing (String s, int x, int y, int w, int h) {
    component = new JIsn(w,h);
    component.setOpaque(true);
    component.setBackground(Color.WHITE);
    JFrame frame = new JFrame(s);
    frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
    frame.add(component);
    frame.setLocation(x,y);
    frame.pack();
    frame.setVisible(true);}

  public static void drawPixel(double x,double y,int c1,int c2,int c3) {
    component.add(new Rectangle2D.Double(x,y,0,0), 
                  new Color (c1,c2,c3),Color.WHITE);}

  public static void drawRect(double x,double y,double a, double b, int c1,
                              int c2,int c3) {
    component.add(new Rectangle2D.Double(x,y,a,b), new Color (c1,c2,c3),  
                  Color.WHITE);}

  public static void paintRect(double x,double y,double a, double b, int c1,
                               int c2,int c3) {
    component.add(new Rectangle2D.Double(x,y,a,b), new Color (c1,c2,c3),
                  new Color (c1,c2,c3));}

  public static void drawLine(double x1,double y1,double x2, double y2, int c1,
                              int c2, int c3) {
    component.add(new Line2D.Double(x1, y1, x2, y2),new Color (c1,c2,c3),
                  Color.WHITE);}

  public static void drawCircle(double cx,double cy,double r, int c1, int c2, 
                                int c3) {
    component.add(new Ellipse2D.Double(cx-r,cy-r,2*r,2*r),
                  new Color (c1, c2, c3),null);}

  public static void paintCircle(double cx,double cy,double r, int c1, int c2, 
                                 int c3) {
    component.add(new Ellipse2D.Double(cx-r,cy-r,2*r,2*r),new Color (c1,c2,c3),
                  new Color(c1,c2,c3));}

//----------------------------------------------------------------------
//                              io
//----------------------------------------------------------------------

  private static final Object readMonitor = new Object();

  private static volatile Scanner scanner 
                                  = scanner(new InputStreamReader(System.in));

  private static Scanner scanner(Reader in) {
    Scanner scanner = new Scanner(in);
    scanner.useLocale(Locale.US);
    return scanner;}

  private static final Object writeMonitor = new Object();

  private static volatile PrintStream output = System.out;

  public static Scanner openIn (String name) {
    try {
      FileInputStream fis = new FileInputStream(name); 
      Scanner scanner = scanner(new InputStreamReader(fis));
      return scanner;}
    catch (java.io.FileNotFoundException e) {
      return scanner(new InputStreamReader(System.in));}}

  public static void closeIn (Scanner s) {
    s.close();}

  public static int readIntFromFile (Scanner s) {
    synchronized (readMonitor) {
      return s.nextInt();}}

  public static int readInt() {
    return readIntFromFile (scanner);}

  public static double readDoubleFromChar(Scanner s) {
    synchronized (readMonitor) {return s.nextDouble();}}

  public static double readDouble() {
    return readDoubleFromChar(scanner);}

  private static final Pattern DOT = Pattern.compile(".",Pattern.DOTALL);  

  public static String readCharacterFromFile(Scanner s) {
    synchronized (readMonitor) {
      return String.valueOf(s.findWithinHorizon(DOT,1).charAt(0));}}

  public static String readCharacter() {
    return readCharacterFromFile(scanner);}

  public static String readStringFromFile (Scanner s) {
    String r, eoln;
    r = "";
    eoln = System.getProperty("line.separator");
    do {
      r = r + Isn.readCharacterFromFile(s);}
    while (!r.endsWith(eoln));
    return r.substring(0,r.length()-eoln.length());}

  public static String readString () {
    return readStringFromFile (scanner);}

  public static OutputStreamWriter openOut (String name) {
    try {
      FileOutputStream fos = new FileOutputStream(name); 
      OutputStreamWriter out = new OutputStreamWriter(fos,"UTF-8");   
      return out;}
    catch (java.io.FileNotFoundException e) {
      return new OutputStreamWriter(System.out);}
    catch (java.io.UnsupportedEncodingException e) {
      return new OutputStreamWriter(System.out);}}

  public static void closeOut (OutputStreamWriter s) {
    try {
      s.close();}
    catch (java.io.IOException e) {}}

  public static void printlnToFile (OutputStreamWriter s) {
    try {s.write(System.getProperty("line.separator"));}
    catch (java.io.IOException e) {}}

  public static void printToFile (OutputStreamWriter s, String n) {
    try {s.write(n);}
    catch (java.io.IOException e) {}}

  public static void printlnToFile (OutputStreamWriter s, String n) {
    printToFile(s,n);
    printlnToFile(s);}

  public static void printToFile (OutputStreamWriter s, int n) {
    try {
      s.write(String.valueOf(n));}
    catch (java.io.IOException e) {}}

  public static void printlnToFile (OutputStreamWriter s, int n) {
    printToFile(s,n);
    printlnToFile(s);}

  public static void printToFile (OutputStreamWriter s, double n) {
    try {
      s.write(String.valueOf(n));}
    catch (java.io.IOException e) {}}

  public static void printlnToFile (OutputStreamWriter s, double n) {
    printToFile(s,n);
    printlnToFile(s);}

//----------------------------------------------------------------------
//                       Strings
//----------------------------------------------------------------------

  public static boolean stringEqual(String s1, String s2) {
    return s1.equals(s2);}

  public static boolean stringAlph(String s1, String s2) {
    return s1.compareTo(s2) <= 0;}

  public static String stringNth (String s, int n) {
    return s.substring(n,n+1);}
	
  public static int stringLength (String s) {
    return s.length();}

  public static String asciiString (int n) {
    byte [] b;
    b = new byte [1];
    b[0] = (byte) n;
    return new String (b);}

  public static int stringCode (String s) {
    return (int)(s.charAt(0));}}
