#include <stdio.h>
int main(){
    int columnas, filas = 1;
    while(filas <= 5){
        columnas = 1;
        while(columnas <= 5){
            printf("x");
            columnas++;
        }
        printf("\n");
        filas++;
    }
    return 0;
}
