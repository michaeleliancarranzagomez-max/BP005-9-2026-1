#include <stdio.h>
float cambiodegrados (float a);
int main(){
   float centigrados, farenheit;
   printf("escribe los grados que vas a cambiar en centigrados\n");
   scanf("%f", &centigrados);
   
   farenheit = cambiodegrados(centigrados);
   printf("los centigrados a farenetheit son: %3f", farenheit);
return 0;
}
float cambiodegrados (float a) {
   float b = (9.0/5.0)*a+32;
   return b;
}
