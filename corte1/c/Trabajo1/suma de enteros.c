#include <stdio.h> 
int main() {
    int numero1, numero2, suma;
    //poner el primer número
    printf("escribe el primer número ");
    scanf("%d", &numero1);
    //poner el seúndo número
    printf("escribe el segundo número ");
    scanf("%d", &numero2);
    //realización de suma
    suma= numero1 + numero2;
    printf("la suma de %d y de %d es %d\n", numero1, numero2, suma);
    return 0;
}
