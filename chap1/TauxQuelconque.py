# Ces programmes sont sous licence CeCILL-B V1.
print("Quel est le prix hors taxes ?")
ht = float(input())
print("Quel est le taux de TVA ?")
taux = float(input())
ttc = ht + ht * taux / 100
print("Le prix toutes taxes comprises est",ttc)
