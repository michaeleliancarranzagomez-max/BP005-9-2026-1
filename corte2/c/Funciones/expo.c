#include <stdio.h>
int potencia(int b, int e);
main(){
 int base, expo, resultado;
 printf("escribe la base\n");
 scanf("%d",&base);
 printf("escribe el exponente\n");
 scanf("%d",&expo);
 resultado = potencia(base, expo);
 printf("esta es tu base %d este es tu exponente %d, haciendo el calculo el resultado es %d\n",base, expo, resultado);
return 0;
}
int potencia(int b, int e){
 int resultado = 1;
 int i;

 for(i = 0; i < e; i++){
  resultado = resultado * b;
 }
 return resultado;
}
