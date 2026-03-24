#include <iostream>
#include <string>   // Para usar string en lugar de char[]
#include <iomanip>  // Para el formato de decimales (%.2f)

using namespace std;

int main() {
    int edad;
    float promedio;
    char inicial;
    string nombre;

    cout << "ingrese su nombre: ";
    getline(cin, nombre); // lo toma como el fgets

    cout << "ingrese su edad: ";
    cin >> edad;

    cout << "ingrese su promedio: ";
    cin >> promedio;

    cout << "ingrese la inicial de su apellido: ";
    cin >> inicial; // cin automáticamente ignora el "Enter" anterior

    cout << "\n Resumen de datos ingresados: \n";
    cout << "nombre: " << nombre << endl;
    cout << "edad: " << edad << endl;
    
    // Configuración para mostrar 2 decimales
    cout << fixed << setprecision(2);
    cout << "promedio: " << promedio << endl;
    
    cout << "inicial del apellido: " << inicial << endl;

    return 0;
 // ya el resto lo dije en el anterior
}
