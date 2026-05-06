#include <stdio.h>
float aprobo (float nota);
void mostrarmensaje(float nota, float resultado);
int main(){
 float nota, resultado;
 printf("escribe tu nota\n");
 scanf("%f", &nota);
 resultado = aprobo(nota);
 mostrarmensaje (nota, resultado);
}
float aprobo(float nota){
 if (nota < 0.0 || nota > 5.0){
  return 2;
 }
 else if(nota < 3.0){
  return 1;
 }
 else{
 return 0;
 }
}
void mostrarmensaje(float nota, float resultado){
 if(resultado == 2){
 printf("nota no valida\n");
 }
 else if(resultado == 1){
 printf("reprobo\n");
 }
 else{
 printf("aprobo");
 }
}
