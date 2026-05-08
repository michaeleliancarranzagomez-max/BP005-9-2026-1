#include <stdio.h>
int contadorglobal = 0;
void contar(){
   int contadornormal = 0;
   static   int contadorlocalestatico = 0;

   contadorglobal++;
   contadornormal++;
   contadorlocalestatico++;

   printf("contadorglobal es = a: %d\n",contadorglobal);
   printf("contadornormal es = a: %d\n",contadornormal);
   printf("contadorlocalestatico es = a: %d\n",contadorlocalestatico);
   printf("-----------------------------\n");
}
int main(){
   contar();
   contar();
   contar();
return 0;
}




