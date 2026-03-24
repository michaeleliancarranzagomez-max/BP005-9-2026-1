#include <stdio.h>
int main() {
   int numero; 
   
   printf("escribe el primer numero ");
   scanf("%d", &numero);
   if (numero %2 == 0){
      printf("el número es par");
   }
   else{
      printf ("el número es impar ");
   }
}
