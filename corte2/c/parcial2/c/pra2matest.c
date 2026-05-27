#include <stdio.h>
#define columnas 3
void imprimir(int datos[][columnas],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<columnas;j++){
            printf("dato[%d][%d] es %d ",i,j,datos[i][j]);
        }
        printf("\n");
    }
}
int sumar(int datos[][columnas],int n,int *suma){
    int i,j;
    *suma=0;
    for(i=0;i<n;i++){
        for(j=0;j<columnas;j++){
            *suma = *suma + datos[i][j];
        }
    }
    return *suma;
}
int main(){
    int m[2][columnas] = {{1,5,9},{7,6,4}};
    int suma;
    imprimir(m,2);
    printf("suma = %d",sumar(m,2,&suma));
 return 0;   
}
