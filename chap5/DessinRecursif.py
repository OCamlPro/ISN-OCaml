# Ces programmes sont sous licence CeCILL-B V1.
# Provisoire : il faudrait créer en python l'équivalent de la classe 
# Isn pour la gestion du graphisme. Mes connaissances graphiques sont
# assez limitées, je me suis contenté pour l'instant de quelque chose
# de simple. 
#
# Guillaume
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
 
   
gauche = 0
droite = 1
haut   = 2
bas    = 3
aucun  = 4

def dessiner (x,y,rayon,interdit): 
   drawCircle(x,y,rayon,0,0,0)
   if rayon > 1:
      if interdit != droite:
         dessiner(x + 3 * rayon // 2,y,rayon // 2,gauche)
      if interdit != gauche:
         dessiner(x - 3 * rayon // 2,y,rayon // 2,droite)
      if interdit != haut:
         dessiner(x,y - 3 * rayon // 2,rayon // 2,bas)
      if interdit != bas:
         dessiner(x,y + 3 * rayon // 2,rayon // 2,haut)


initDrawing("DessinRécursif",10,10,400,400)
dessiner(200,200,64,aucun)
showDrawing()
