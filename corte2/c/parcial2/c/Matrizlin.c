#include <stdio.h>
int main(){
   int matriz[2][3]= {{5,2,4}, {3,6,8}};
   int k; //recorre uno por uno 
   int total=3*2; //cantidad de elementos 
   int *p = &matriz[0][0];
    //apunta al primero de la matriz
   for (k=0; k < total;k++){
       printf("el valor es %d\n", *(p + k));  
       //acá la k suma es la cantidad de un bait int   
   }
   return 0;
}
