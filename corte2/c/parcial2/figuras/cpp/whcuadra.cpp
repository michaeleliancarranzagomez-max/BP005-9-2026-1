#include <iostream>
int main(){
    int columnas, filas = 1;
    while(filas <= 5){
        columnas = 1;
        while(columnas <= 5){
            std::cout << "x";
            columnas++;
        }
        std::cout << "\n";
        filas++;
    }
    return 0;
}
