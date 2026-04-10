#include <stdio.h>
int main(){
   int i;
   float nota, suma = 0.0, promedio;

   for (i = 1; i <= 4; i++){
      printf("ingrese la nota %d: ", i);
      scanf("%f", &nota);

      suma = suma + nota ;
   }
   promedio = suma / 4.0;

   printf("el promedio es %.2f\n", promedio);
return 0;
}
