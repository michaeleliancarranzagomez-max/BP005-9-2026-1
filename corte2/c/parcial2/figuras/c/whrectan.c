#include <stdio.h>
int main(){
    int columnas, filas = 1;
    do{
        columnas = 1;
        do{
            printf("= ");
            columnas++;
        }while(columnas <= 6);
        printf("\n");
        filas++;
    }while(filas <= 3);
return 0;
}
