# Ces programmes sont sous licence CeCILL-B V1.
print("Quel est le prix hors taxes ?")
ht = float(input())
ttc = ht + ht * 19.6 / 100
print("Le prix toutes taxes comprises est",ttc)
