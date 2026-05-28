#include <stdio.h>
int main(){
    int *p=NULL;
    if(p!=NULL){
        printf("valor = %d\n", *p);
    } else {
        printf("p no apunta a una direccion valida\n");
    }
    return 0;
}
