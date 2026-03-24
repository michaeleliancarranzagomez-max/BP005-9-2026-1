#include <stdio.h>
int main(){
   int variablea, variableb, variablec;
   printf("escribe el primer número ");
   scanf("%d", &variablea);
   printf("segundo numero ");
   scanf("%d", &variableb);
   printf("el tercero ");
   scanf("%d", &variablec);
   if(variablea >= variableb && variablea >= variablec){
      printf("elnumero %d es mayor", variablea);
   }
   else if(variablea <= variableb && variableb >= variablec){
      printf("el número %d es mayor", variableb);
   }
   else {
      printf("el número %d es mayor", variablec);
   }
}
