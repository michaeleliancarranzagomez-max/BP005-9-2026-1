#include <iostream>

int main() {
    int x = 25;
    int *p = &x;
    
    // Mostramos los valores iniciales
    std::cout << "x = " << x << "\n";
    std::cout << "*p = " << *p << "\n";
   
    // Modificamos el valor de x a través del puntero p
    *p = 40;
    
    // Comprobamos que x realmente cambió
    std::cout << "x = " << x << "\n";
   
    return 0;
}
