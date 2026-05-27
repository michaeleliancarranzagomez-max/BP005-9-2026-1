#include <iostream>
int main() {
int n, i;
int *datos = NULL;
std::cout << "Cuantos enteros desea guardar: ";
std::cin >> n;
/* Reservamos memoria para n enteros. */
datos = new int[n];

for (i = 0; i < n; i++) {
std::cout << "Ingrese datos[" << i << "]: ";
std::cin >> datos[i];
}
std::cout << "Datos ingresados: ";
for (i = 0; i < n; i++) {
std::cout << datos[i] << " ";
}
std::cout << std::endl;
/* Liberamos la memoria dinamica. */
delete[] datos;
datos = NULL;
return 0;
}
