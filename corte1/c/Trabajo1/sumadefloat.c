#include <stdio.h>
int main() {
    //declaración de las variables 
    float num1, num2, suma;
    //pon los dos número
    printf("escribe el primer numero ");
    scanf("%f", &num1);

    printf("escribe el segundo numero ");
    scanf("%f", &num2);
    suma = num1 + num2;

    printf("la suma de %f y de %f es igual a %f", num1, num2,suma);
return 0 ;
}
