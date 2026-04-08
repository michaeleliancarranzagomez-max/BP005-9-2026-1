#include <stdio.h>
int main(){
   int contador =1, numero, suma = 0;
   while (contador <= 3){
     printf("ingrese un numero el que quiera\n");
     scanf("%d", &numero);

     suma = suma + numero;
     contador++;
   }
   printf("la suma es de los datos puestos es: %d\n", suma);
return 0;
}

