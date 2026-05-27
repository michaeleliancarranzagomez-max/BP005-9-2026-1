#include <iostream>
int main() {
int filas = 2;
int columnas = 3;
int i, j;
int *matriz = NULL;
matriz = new int[filas * columnas];//esto es para reservar memoria
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
matriz[i * columnas + j] //esto es para recorrer los datos
= (i + 1) * 10 + j;//y esto es para meterle datos
}
}
for (i = 0; i < filas; i++) {
for (j = 0; j < columnas; j++) {
std::cout << matriz[i * columnas + j] << " ";
}
std::cout << std::endl;
}
delete[] matriz;
matriz = NULL;
return 0;
}
