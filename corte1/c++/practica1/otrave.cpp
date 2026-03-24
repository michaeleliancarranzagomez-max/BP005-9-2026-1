#include <iostream>// iostream remplaza stdio
#include <string> // Para usar strings en lugar de arreglos de char
#include <iomanip> // Para configurar los decimales (%.2f)

using namespace std; //estamos usando lenguaje c++

int main() {
    string nombre;
    float nota1, nota2, nota3, promedio;

    cout << "Ingrese el nombre del estudiante: ";
    // Usamos getline si quieres nombres con espacios, o cin >> si es una sola palabra
    cin >> nombre; 
    // cin remplaza el scan

    cout << "Ingrese la nota 1: ";
    //cout remplza print
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;

    if ((nota1 < 0.0 || nota1 > 5.0) || (nota2 < 0.0 || nota2 > 5.0) || (nota3 < 0.0 || nota3 > 5.0)) {
        cout << "\nUna o mas notas son invalidas.\n";
    } else {
        promedio = (nota1 + nota2 + nota3) / 3;

        cout << "\nEstudiante: " << nombre << endl;
        // fixed y setprecision(2) reemplazan al %.2f
        cout << fixed << setprecision(2);
        cout << "Promedio: " << promedio << endl;

        if (promedio < 3.0) {
            cout << "Resultado: Reprobado." << endl;
        } else if (promedio < 4.0) {
            cout << "Resultado: Aprobado con desempeño aceptable." << endl;
        } else if (promedio < 4.5) {
            cout << "Resultado: Buen desempeño." << endl;
        } else {
            cout << "Resultado: Excelente desempeño." << endl;
        }
    }
// cuando << apunta hacia adentro es muestralo y al revez es guardalo
    return 0;
}
