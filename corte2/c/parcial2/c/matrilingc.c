#include <stdio.h>
#include  <stdlib.h>
int main(){
    int filas = 2;
    int columnas = 3;
    int i, j; 
    int *m = NULL;
    // una vez declaradas la variables reservamos la memoria
    m = malloc(filas * columnas * sizeof(int)); 
    if (m == NULL){
        printf("No fue posible reservar memoria\n");
        return 1;
    }

    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++){
            m[i * columnas + j] = (i + 1) * 10 + j;
            //la primera parte es para recorrer la matriz uno por uno
            // la segunda ya es pára llenar cada uno de esas direcciones en la matriz
        }
    }

    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++){
            printf("el valor es %d; ", m[i * columnas + j]);
        }
        printf("\n");
    }
    free(m);
    m = NULL;

    return 0;
}
