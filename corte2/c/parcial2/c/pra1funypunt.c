#include <stdio.h>

void leerarreglo(int *datos,int n){
    int i;
    if(datos== NULL){
        return;
    }
    for(i = 0; i < n; i++){
        printf("escribe el dato [%d]\n",i);
        scanf(" %d",&datos[i]);
    }
}

void imprimir(int *datos, int n){
    int i;
    if(datos == NULL){
        return;
    }
    for(i = 0; i < n; i++){
        printf("dato[%d] = %d ",i,datos[i]);
    }
    printf("\n");
}
void analizar(int datos[],int n,int *suma, float *promedio){
    int i;
    if(datos == NULL || suma == NULL || promedio == NULL){
        return;
    }
    *suma = 0;
    for(i = 0 ; i < n; i++) {
        *suma = *suma + datos[i];
    }
    *promedio =(float) *suma / n;
}
int main(){
    int arr[5],suma;
    float promedio;
    leerarreglo(arr,5);
    imprimir(arr,5);
    analizar(arr,5,&suma,&promedio);
    printf("la suma de los valore es %d\n",suma);
    printf("y el promedio %2f",promedio);
    return 0;
}
