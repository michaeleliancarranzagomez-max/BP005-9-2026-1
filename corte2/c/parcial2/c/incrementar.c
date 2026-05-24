#include <stdio.h>
void incrementar(int *datos,int n){
    int i;
    if (datos == NULL){
        printf("el dato es invaliudo");
        return;
    }

    for (i=0; i<n; i++){
        datos[i]= datos[i]+1;
    }
}
void mostrar(int datos[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("valor de [%d] = %d ", i, datos[i]);
    }
    printf("\n");
}
int main(){
    int datos[5] = {8,10,3,15,16};
    printf("antes: ");
    mostrar(datos,5);
    printf("despues: ");
    incrementar(datos, 5);
    mostrar(datos,5);
    return 0;
}
