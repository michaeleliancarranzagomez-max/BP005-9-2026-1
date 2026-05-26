#include <stdio.h>
int main(){
   int matriz[2][3]= {{5,2,4}, {3,6,8}};
   int j, i;
   for (i=0; i<2;i++){
       for(j = 0; j<3; j++){
          printf("valor [%d][%d] = %d y dirección %p ",i,j,matriz[i][j],(void *)&matriz[i][j]);
       }
       printf("\n");    
   }
   return 0;
}
