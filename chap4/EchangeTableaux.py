# Ces programmes sont sous licence CeCILL-B V1.
def echange (x,y):
   z = x[0]
   x[0] = y[0]
   y[0] = z


a = [4] 
b = [7]
echange(a,b)
print(a[0],b[0])
