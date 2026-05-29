#include <iostream>
int main(){
    int fila,columna, espacios;
    for(fila = 1; fila < 10; fila ++){
        for(espacios = 1; espacios < 10 - fila; espacios ++){
            std::cout << " ";
        }
        for(columna = 1; columna < 2 * fila - 1; columna ++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
