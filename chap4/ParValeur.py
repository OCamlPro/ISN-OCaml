# Ces programmes sont sous licence CeCILL-B V1.
def h(j):
   global i
   j = j + 1
   print(i)
   print(j)
   k = j + i
   i = 5
   return k


m = 1
i = 10
print(m)
n = h(m)
print(m)
print(n)
print(i)
