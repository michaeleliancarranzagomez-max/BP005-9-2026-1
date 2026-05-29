#include <iostream>
int main(){
    int columnas, filas = 1;
    do{
        columnas = 1;
        do{
            std::cout << "= ";
            columnas++;
        }while(columnas <= 6);
        std::cout << std::endl;
        filas++;
    }while(filas <= 3);
return 0;
}
