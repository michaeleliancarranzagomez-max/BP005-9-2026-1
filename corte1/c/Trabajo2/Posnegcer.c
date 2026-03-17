#include <stdio.h>
int main() {
   int numero; 
   printf("escribe el primer numero ");
   scanf("%d", &numero);
   if (numero > 0){
      printf("el número es positivo");
   }
   else if(numero< 0){
      printf ("el número es negativo");
   }
   else{
      printf("el número es cero ");
   }
}
