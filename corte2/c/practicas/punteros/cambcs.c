include <stdio.h>

void cambiarsinpuntero(int n)
{
   n=100;
}
void cambiarconpuntero(int *p){
   if(p != NULL){
      *p=100;
   }
}

int main() {
   int x = 5;

   printf("Antes de cambiarsinpuntero: x = %d\n",x);
   cambiarsinpuntero(x);
   printf("despues de cambiarsinpuntero: x = %d\n", x);

   printf("Antes de cambiarconpuntero: x = %d\n",x);
   cambiarconpuntero(&x);
   printf("despues de cambiarconpuntero: x = %d\n",x);
return 0;
}



