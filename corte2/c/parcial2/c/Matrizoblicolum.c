#include <stdio.h>
#define columnas 3
void mostrarmatriz(int m[][columnas],int filas) {
    int i,j;
    for(i=0; i<filas; i++){
       for(j = 0; j < columnas; j++){
       printf("valor [%d][%d] = %d ",i,j, m[i][j]);
       }
    printf("\n");
    }
    }
int main(){
   int matriz[2][columnas]= {{5,2,4}, {3,6,8}};
   mostrarmatriz(matriz,2);
   return 0;
}
