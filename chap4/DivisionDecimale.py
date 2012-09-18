# Ces programmes sont sous licence CeCILL-B V1.
def divisionDecimale (dividende, diviseur):
   if diviseur == 0:
      quotient = float("inf")
   else:
      quotient = dividende / diviseur
   return quotient

print( divisionDecimale(2,3) )
