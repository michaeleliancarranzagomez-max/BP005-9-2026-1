#include <iostream>
int main(){
    int columnas, filas = 1;
    do {
        columnas = 1;
        do{
            std::cout << "$ ";
            columnas++;
        }while(columnas <= filas);
        std::cout << std::endl;
        filas++;
    }while(filas <= 5);
return 0;
}
