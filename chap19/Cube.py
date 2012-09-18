# Ces programmes sont sous licence CeCILL-B V1.
from tkinter import Tk,Frame,Button,Canvas,LEFT,RIGHT,TOP

root = None
application = None
canvas = None
btnQuitter = None

def initDrawing(titre,x,y,largeur,hauteur):
   global root,application,canvas,btnQuitter
   root = Tk()
   application = Frame(root)
   application.pack()
   application.master.title(titre)
       
   canvas = Canvas(application, width=largeur, height=hauteur)
   canvas.pack(side=TOP)
      
   btnQuitter = Button(application, text="Quitter", command=application.quit)
   btnQuitter.pack(side=RIGHT)

def drawRectangle(x1,y1,x2,y2,rouge,vert,bleu):
   global canvas
   couleur = "#%02x%02x%02x" % (rouge,vert,bleu)
   canvas.create_rectangle(x1,y1,x2,y2,outline=couleur,fill="white")

def drawCircle(x,y,rayon,rouge,vert,bleu):
   global canvas
   couleur = "#%02x%02x%02x" % (rouge,vert,bleu)
   canvas.create_oval(x-rayon,y-rayon,x+rayon,y+rayon,outline=couleur,fill="white")
   
def drawPixel(x,y,rouge,vert,bleu):
   global canvas
   couleur = "#%02x%02x%02x" % (rouge,vert,bleu)
   canvas.create_rectangle(x,y,x,y,outline=couleur)
   
def drawLine(x1,y1,x2,y2,rouge,vert,bleu):
   global canvas
   couleur = "#%02x%02x%02x" % (rouge,vert,bleu)
   canvas.create_line(x1,y1,x2,y2,fill=couleur)

def showDrawing():
   global root
   root.mainloop()

   
initDrawing("Cube",10,10,400,400)

# Face avant  
drawLine (100,300,100,100,0,0,0)
drawLine (100,100,300,100,0,0,0)
drawLine (300,100,300,300,0,0,0)
drawLine (300,300,100,300,0,0,0)

# Face arrière
drawLine (150,250,150,150,0,0,0)
drawLine (150,150,250,150,0,0,0)
drawLine (250,150,250,250,0,0,0)
drawLine (250,250,150,250,0,0,0)

# Arêtes fuyantes
drawLine (100,300,150,250,0,0,0)
drawLine (100,100,150,150,0,0,0)
drawLine (300,100,250,150,0,0,0)
drawLine (300,300,250,250,0,0,0)

showDrawing()
