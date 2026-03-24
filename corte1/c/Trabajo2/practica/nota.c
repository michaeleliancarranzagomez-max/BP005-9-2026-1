#include <stdio.h>
int main(){
   float nota;
   printf("escribe la nota entre 0.0 y 5.0 ");
   scanf("%f", &nota);
   if(nota<0.0 || nota>5.0){
      printf("la nota no esta dentro del rango");
   } else if(nota < 3.0){
       printf("reprobado la nota no es suficiente");
     } else if(nota < 4.0){
         printf("aceptable");
       } else if(nota < 4.5){
           printf("sobresaliente");
         } else{
             printf("excelente");
             }
}
