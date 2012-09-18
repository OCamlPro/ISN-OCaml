# Ces programmes sont sous licence CeCILL-B V1.
def TirerUnTrait ():
   print()
   print("-----------------------------------------------")
   print()

def annoncerUnVol (vol,horaire):
   print("Le vol en direction de ",vol," décolera à ",horaire,sep="",end="")
   TirerUnTrait()

annoncerUnVol("Tokyo","9h00")
annoncerUnVol("Sydney","9h30")
annoncerUnVol("Toulouse","9h45")
