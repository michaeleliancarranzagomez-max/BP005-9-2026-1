#include <stdio.h>
int main(){
   int edad;
   printf("escribe tu edad ");
   scanf("%d", &edad);
   if(edad > 0){
      if(edad < 18 ){
         printf("eres menor de edad ");
      } else{
        printf("eres mayor de edad ");
        }
   } else{ 
      printf("la edad no es valida ");
     }
return 0;
}
