#include <stdio.h>
void cambiar(int n){
    n = 100;
    printf("dentro de cambiar : n = %d\n",n);
}
int main(){
    int x = 5;
    printf("antes de cambiar : x = %d\n",x);
    cambiar(x);
    printf("despues de cambiar : x = %d\n",x);
    return 0;
}
