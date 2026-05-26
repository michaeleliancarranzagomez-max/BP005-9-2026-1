#include <stdio.h>
#define columnas 3
void incrementar(int m[][columnas],int filas) {
    int i,j;
    for(i=0; i<filas; i++){
       for(j = 0; j < columnas; j++){
       m[i][j] = m[i][j] + 1;
       }
    }
}
void imprimir(int matriz[][columnas],int fila){
    int i,j;
      for(i = 0; i<fila; i++){
      for(j = 0; j<columnas; j++){
         printf("%d, ",matriz[i][j]);
      }
      printf("\n");
      }
    }
int main(){
   int matriz[2][columnas]= {{5,2,4}, {3,6,8}};
   int i,j;
   printf("antes\n");
   imprimir(matriz,2);
   incrementar(matriz,2);
   printf("despues\n");
   imprimir(matriz,2);
   return 0;
}
