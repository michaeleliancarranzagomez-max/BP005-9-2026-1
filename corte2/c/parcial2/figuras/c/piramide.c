#include <stdio.h>
int main(){
    int fila,columna, espacios;
    for(fila = 1; fila < 10; fila ++){
        for(espacios = 1; espacios < 10 - fila; espacios ++){
            printf(" ");
        }
        for(columna = 1; columna < 2 * fila - 1; columna ++){
            printf("*");
        }
        printf("\n");
    }
}
