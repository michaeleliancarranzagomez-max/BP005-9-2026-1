#include <stdio.h>
void analizar(int *datos, int n, int *suma, int *mayor,int *menor ){
    int i;
    if(datos == NULL || suma == NULL || mayor == NULL || menor == NULL){
        printf("algun dato no es valido");
        return;
    }
    *suma = 0;
    *menor = datos[0];
    *mayor = datos[0];
    for(i=0; i<n; i++){
        *suma = *suma + datos[i];
        if (datos[i]> *mayor){
            *mayor= datos[i];
        }
        if(datos[i] < *menor ){
            *menor = datos[i];
        }
    }
}
int main(){
    int mayor, menor,suma;
    int datos[5] = {10, 28, 15, 3, 5};
    int i;
    for(i = 0; i<5; i++){
        printf("valor [%d] = %d ", i, datos[i]);
    } 
    printf("\n");
    analizar(datos,5,&suma,&mayor,&menor);
    printf("la suma de los elementos es: %d\n",suma);
    printf("el mayor es: %d\n",mayor);
    printf("el menor es: %d\n", menor);
    return 0;
}
