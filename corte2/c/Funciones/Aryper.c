#include <stdio.h>
float area (float b, float h);
float perimetro(float b, float h);
int main (){
   float base, altura, ar, per;
   printf("escribe primero la base de tu rectangulo\n");
   scanf("%f", &base);
   printf("y ahora la altura\n");
   scanf("%f",&altura);
   ar = area(base, altura);
   per = perimetro(base, altura);
   printf("esta es el área %2f\n",ar);
   printf("y este el perímetro %2f\n", per);
}
float area(float b, float h){
   float a = b*h;
return a;
}
float perimetro(float b, float h){
   float p = 2*(b+h);
return p;
}
