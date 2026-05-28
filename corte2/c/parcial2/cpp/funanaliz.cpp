#include <iostream>
void analizar(int a, int b, int c, int *suma, int *mayor, int *menor){
    *suma = a + b + c;
    *mayor = a;
    if(b > *mayor) *mayor = b;
    if(c > *mayor) *mayor = c;
    *menor = a;
    if(b < *menor) *menor = b;
    if(c < *menor) *menor = c;
}
int main(){
    int a, b, c, suma, mayor, menor;
    std::cout<<"Ingrese el primer numero: ";
    std::cin>>a;
    std::cout<<"Ingrese el segundo numero: ";
    std::cin>>b;
    std::cout<<"Ingrese el tercer numero: ";
    std::cin>>c;
    analizar(a, b, c, &suma, &mayor, &menor);
    std::cout<<"La suma es: "<<suma<<std::endl;
    std::cout<<"El mayor es: "<<mayor<<std::endl;
    std::cout<<"El menor es: "<<menor<<std::endl;
    return 0;
}
