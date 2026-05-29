#include <iostream>
void duplicar(int *p){
   if(p != NULL){
       *p = *p * 2;
   }
}
void intercambiar(int *a, int *b){
    if(a == NULL || b == NULL){
        return;
    }
    int temp = *a;
    *a = *b;
    *b = temp;
}
void analizar(int a, int b, int c, int *suma, int *mayor, int *menor){
    if (suma == NULL || mayor == NULL || menor == NULL){
        return;
    }
    *suma = a + b + c;
    *mayor = a;
    if (b > *mayor){
        *mayor = b;
    }if (c > *mayor){
        *mayor = c;
    }
    *menor = a;
    if (b < *menor){
        *menor = b;
    }
    if (c < *menor){
        *menor = c;
    }
}
int main(){
    int x = 10;
    int y = 20;
    int z = 5;

    int *px = &x;

    int suma, mayor, menor;
    int opcion;

    do{
        std::cout << "\n========== MENU ==========\n";
        std::cout << "1, mostrar x, &x, px Y *px\n";
        std::cout << "2, duplicar x usando puntero  *px\n";
        std::cout << "3 intercambiar x, y, z usando pu teros\n";
        std::cout << "4, analizar x, y, z usando punteros\n";
        std::cout << "0, salir\n";
        std::cout << "seleccione una opcion: ";
        std::cin >> opcion;
        switch (opcion){
            case 1:
                std::cout << "Valor de x: " << x << "\n";
                std::cout << "Direccion de x: " << (void*)&x << "\n";
                std::cout << "Valor de px: " << (void*)px << "\n";
                std::cout << "Valor apuntado por px: " << *px << "\n";
                break;
            
            case 2:
                std::cout << "antes de duplicar x: " << x << "\n";
                duplicar(px);
                std::cout << "despues " << x << "\n";
                break;
            case 3:
                std::cout << "antes x = " << x << ", y = " << y << "\n";
                intercambiar(&x, &y);
                std::cout << "despues x = " << x << ", y = " << y << "\n";
                break;
            case 4:
                analizar(x, y, z, &suma, &mayor, &menor);
                std::cout << "suma: " << suma << ", mayor: " << mayor << ", menor: " << menor << "\n";
                break;
            case 0:
                std::cout << "saliendo del programa...\n";
                break;
            default:
                std::cout << "opcion no valida.\n";
                break;
        }
    } while (opcion != 0);
    return 0;
}
