#include <iostream>
void incrementar(int m[],int n){
    int i;
    if(m == NULL){
        return;
    }
    for(i=0;i<n;i++){
        m[i] = m[i]+1;
    }
}
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
   std::cout<<"antes"<<std::endl;
   imprimir(datos,3);
   std::cout<<"despues"<<std::endl;
   incrementar(datos,3);
   imprimir(datos,3);
   return 0;
}
