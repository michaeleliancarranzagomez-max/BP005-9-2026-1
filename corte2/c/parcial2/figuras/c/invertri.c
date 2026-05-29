#include <stdio.h>
int main(){
    int fila=5;
    int columna;
    while(fila >= 1){
        columna = 1;
        while(columna <= fila){
            printf("+");
            columna++;
        }
        printf("\n");
        fila = fila - 1;
    }
    return 0;
}
