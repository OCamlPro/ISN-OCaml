# Ces programmes sont sous licence CeCILL-B V1.
def v (x):
   global z
   u = x * x
   z = int(x)
   return u

y = 4
t = 1 / y
# En python une variable non initialisée n'existe pas donc la variable globale x n'existe pas !
print( v(t) )
#print(z)
