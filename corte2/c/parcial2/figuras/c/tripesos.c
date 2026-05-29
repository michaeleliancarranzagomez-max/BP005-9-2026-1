#include <stdio.h>
int main(){
    int columnas, filas = 1;
    do {
        columnas = 1;
        do{
            printf("$ ");
            columnas++;
        }while(columnas <= filas);
        printf("\n");
        filas++;
    }while(filas <= 5);
return 0;
}
