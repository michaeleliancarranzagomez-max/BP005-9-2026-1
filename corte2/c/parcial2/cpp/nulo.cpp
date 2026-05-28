#include <iostream>
int main(){
    int *p=NULL;
    if(p!=NULL){
        std::cout<<"valor = "<<*p<<std::endl;
    } else {
        std::cout<<"p no apunta a una direccion valida"<<std::endl;
    }
    return 0;
}
