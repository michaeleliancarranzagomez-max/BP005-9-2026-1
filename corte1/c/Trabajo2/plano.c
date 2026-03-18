#include <stdio.h>
int main(){
   float x, y;
   
   printf("escribe el valor de x ");
   scanf("%f", &x);

   printf("escribe el valor de y ");
   scanf("%f", &y);
   if(x>0 && y>0){
     printf("el punto esta en el cuadrante 1");
     }else if(x<0 && y>0){
        printf("el punto esta en el cuadrante 2");
      }else if(x<0 && y<0){
         printf("el punto esta en el cuadrante 3");
       }else if(x>0 && y<0){
          printf("el punto esta en el cuadrante 4");
        }else if(x==0 && y==0){
           printf("el punto esta en el origen");
         }else if(x==0 && y!=0){
            printf("el punto esta en el eje y");
          }else{
             printf("esta en el eje x");
           }
return 0;
}
