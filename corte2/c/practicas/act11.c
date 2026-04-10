#include <stdio.h>
int main(){
   int i, contador = 0;

   for (i=1; i <= 20; i++){
      if (i %2 == 0){
         printf("%d es par\n", i);
      }
   }
   printf("cantidad de numeros pares %d\n", contador);

return 0;
}
