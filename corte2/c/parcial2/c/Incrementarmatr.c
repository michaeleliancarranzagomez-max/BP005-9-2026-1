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
int main(){
   int matriz[2][columnas]= {{5,2,4}, {3,6,8}};
   int i,j;
   printf("antes\n");
   for(i = 0; i<2; i++){
      for(j = 0; j<columnas; j++){
         printf("%d, ",matriz[i][j]);
      }
      printf("\n");
   }
   incrementar(matriz,2);
   printf("despues\n");
   for(i = 0; i<2; i++){
      for(j = 0; j<columnas; j++){
         printf("%d, ",matriz[i][j]);
      }
      printf("\n"); 
   }
   return 0;
}
