# Ces programmes sont sous licence CeCILL-B V1.
def puissance (n):
    if n == 0:
      return 1
    else:
      return (2 * puissance(n-1))


print( puissance(10) )
