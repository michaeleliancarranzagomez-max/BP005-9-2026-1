#include <stdio.h>
int main(){
   float nota;
   printf("escriba una nota entre 0.0 hasta 5.0 ");
   scanf("%f", &nota);
   if(nota >= 0.0 && nota <= 5.0){
      printf("la nota esta en el rango");
   } else{
          printf("la nota no es válida no está en el rango");
          }
}
