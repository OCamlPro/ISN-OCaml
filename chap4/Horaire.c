// Ces programmes sont sous licence CeCILL-B V1.
#include <stdio.h>

static void TirerUnTrait ()
{
   printf("\n");
   printf("-----------------------------------------------\n");
   printf("\n");
}

int main() 
{
   printf("Le vol en direction de ");
   printf("Tokyo");
   printf(" décolera à ");
   printf("9h00");
   TirerUnTrait();

   printf("Le vol en direction de ");
   printf("Sydney");
   printf(" décolera à ");
   printf("9h30");
   TirerUnTrait();

   printf("Le vol en direction de ");
   printf("Toulouse");
   printf(" décolera à ");
   printf("9h45");
   TirerUnTrait();
}
