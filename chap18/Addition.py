# Ces programmes sont sous licence CeCILL-B V1.
nbBits = 10

n = [False] * nbBits
n[0] = True
n[1] = True
n[2] = True

p = [False] * nbBits
p[1] = True

r = [None] * (nbBits + 1)

retenue = False
for bit in range(nbBits):
   a = n[bit]
   b = p[bit]
   r[bit] = (a and not b and not retenue)
   r[bit] = r[bit] or (not a and b and not retenue)
   r[bit] = r[bit] or (not a and not b and retenue) 
   r[bit] = r[bit] or (a and b and retenue)
   retenue = (a and b) or (b and retenue) or (a and retenue)
r[nbBits] = retenue

print(" ",end="") 
for bit in range(nbBits):
   if n[nbBits-1-bit]:
      print("1",end="")
   else:
      print("0",end="")
print()

print(" ",end="") 
for bit in range(nbBits):
   if p[nbBits-1-bit]:
      print("1",end="")
   else:
      print("0",end="")
print()

for bit in range(nbBits+1):
   if r[nbBits-bit]:
      print("1",end="")
   else:
      print("0",end="")
print()
