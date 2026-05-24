#include <stdio.h>
void mostrar(int *datos, int n){
    int i;
    if (datos == NULL){
        printf("el valor es invalido\n");
        return;
    }
    for(i = 0; i<n;i++){
        printf("valor de [%d] = %d ", i, datos[i]);
    }
    printf("\n");
}
int main(){
    int datos[5]={8,10,16,3,5};
    mostrar(datos, 5);
    return 0;
}
