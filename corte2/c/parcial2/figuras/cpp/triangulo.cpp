#include <iostream>
int main(){
    int fila,columna;
    for(fila = 1; fila < 10; fila ++){
        for(columna = 1; columna < fila; columna ++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
