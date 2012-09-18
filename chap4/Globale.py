# Ces programmes sont sous licence CeCILL-B V1.
def f (x):
   global a
   print(2 * x)
   a = 2 * x

a = 3
n = 4
f(a + n)
#print(a)
