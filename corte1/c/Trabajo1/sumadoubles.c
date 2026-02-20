#include <stdio.h>
int main() {
  //crear variables
  double num1, num2, suma;
  //fijar numero de variables
  printf("escribe un numero decimal ");
  scanf("%lf", &num1);
  printf("ya sabes que hacer ");
  scanf("%lf", &num2);
  //realiza la suma
  suma = num1 + num2;
  //da el resultado
  printf("la suma de %lf y de %lf es: %lf", num1, num2, suma);
return 0;
}
