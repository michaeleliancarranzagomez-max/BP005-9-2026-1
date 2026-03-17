#include <stdio.h>
int main(){
   int anio;
   printf("ingrese un anio ");
   scanf("%d", &anio);
   if(anio % 4 == 0 && anio % 100 != 0 || (anio % 400 == 0)){
      printf("el anio %d es bisiesto.\n", anio);
   } else {
       printf("el anio %d no es bisiesto", anio);
     }
return 0;
}
