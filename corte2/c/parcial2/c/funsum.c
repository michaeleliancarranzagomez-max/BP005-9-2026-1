#include <stdio.h>
int sumar(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("La suma es: %d\n", sumar(a,b));
    return 0;
}
