# Ces programmes sont sous licence CeCILL-B V1.
def quotient (dividende, diviseur):
   if dividende < diviseur:
      return 0
   else:
      return (1 + quotient(dividende - diviseur, diviseur))

print( quotient(17,3) )
