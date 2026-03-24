#include <stdio.h>
int main(){
   int variablea, variableb;
   printf("escribe el primer número ");
   scanf("%d", &variablea);
   printf("segundo numero ");
   scanf("%d", &variableb);
   if(variablea>variableb){
      printf("elnumero %d es mayor que %d", variablea, variableb);
   }
   else if(variablea<variableb){
      printf("el número %d es mayor que %d", variableb, variablea);
   }
   else{
      printf("son iguales ");
   }
}
