#include <stdio.h>
void analizar(int a, int b, int c, int *suma, int *mayor, int *menor){
   if(suma == NULL||mayor == NULL||menor == NULL) {
        return;
    }
    *suma = a + b + c;
    *mayor = a;
    if(b > *mayor) *mayor = b;
    if(c > *mayor) *mayor = c;
    *menor = a;
    if(b < *menor) *menor = b;
    if(c < *menor) *menor = c;
}
int main(){
    int a, b, c, suma, mayor, menor;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);
    analizar(a, b, c, &suma, &mayor, &menor);
    printf("La suma es: %d\n", suma);
    printf("El mayor es: %d\n", mayor);
    printf("El menor es: %d\n", menor);
    return 0;
}
