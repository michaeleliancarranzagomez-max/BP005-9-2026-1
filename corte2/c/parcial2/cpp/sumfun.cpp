#include <iostream>
int sumar(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    std::cout<<"Ingrese el primer numero: ";
    std::cin>>a;
    std::cout<<"Ingrese el segundo numero: ";
    std::cin>>b;
    std::cout<<"La suma es: "<<sumar(a,b)<<std::endl;
    return 0;
}
