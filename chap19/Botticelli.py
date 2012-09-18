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

   
initDrawing("Botticelli",10,10,400,400)

# Le sol
for j in range(250,300 + 1):
   for i in range(400 - j,j + 1):
      if (10 * (i+j-400) // (j-200) + 10 * (600-2*j) // (j-200))%2 == 0:
         drawPixel(i,j,167,103,38)
      else:
         drawPixel(i,j,255,255,0)

# Les murs
for i in range(100,150 + 1):
   for j in range(i,400 - i + 1):
      drawPixel(i,j,240,195,0)
for i in range(250,300 + 1):
   for j in range(400 - i,i + 1):
      drawPixel(i,j,240,195,0)

# Le plafond
for j in range(100,150 + 1):
   for i in range(j,400 - j + 1):
      drawPixel(i,j,246,220,18)

# Le mur du fond 
for i in range(150,250 + 1):
   for j in range(150,250 + 1):
      if (160 <= i) and (i <= 210) and (160 <= j) and (j <= 220):
         drawPixel(i,j,119,181,254)
      else:
         drawPixel(i,j,255,244,141)
         
showDrawing()
