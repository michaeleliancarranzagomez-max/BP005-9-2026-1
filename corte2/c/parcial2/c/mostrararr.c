#include <stdio.h>
void mostrararreglo(int datos[], int n) {
    int i;
    for(i = 0; i<n ;i++){
        printf("dato[%d] = %d ",i,datos[i]);
    }
    printf("\n");
}
int main(){
    int datos[5]={8,3,15,6,10};
    mostrararreglo(datos,5);
}
