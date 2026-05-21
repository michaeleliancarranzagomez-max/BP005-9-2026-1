#include <stdio.h>
int main(){
    int datos[5]={8, 3, 15, 6, 10};
    int i;
    for(i=0; i<5;i++){
        printf("dato[%d]: %d, direccion de los datos: %p\n",i,datos[i],(void *) &datos[i]);
    }
return 0;
}
