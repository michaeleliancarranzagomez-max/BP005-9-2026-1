#include <iostream>
void imprimir(int m[],int n){
    int i;
    if(m == NULL){
        std::cout<<"no se puede imprimir el arreglo"<<std::endl;
        return;
    }
    for(i = 0; i < n;i++){
        std::cout<<"datos = "<< m[i]<<" "<<std::endl;
    }
    std::cout<<std::endl;
}
int main(){
   int datos[3] = {10,20,30};
   imprimir(datos,3);
   return 0;
}
