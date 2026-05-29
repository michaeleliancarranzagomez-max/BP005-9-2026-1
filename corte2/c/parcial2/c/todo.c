#include <stdio.h>
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
        printf("\n========== MENU ==========\n");
        printf("1, mostrar x, &x, px Y *px\n");
        printf("2, duplicar x usando puntero  *px\n");
        printf("3 intercambiar x, y, z usando pu teros\n");
        printf("4, analizar x, y, z usando punteros\n");
        printf("0, salir\n");
        printf("seleccione una opcion: ");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:
                printf("Valor de x: %d\n", x);
                printf("Direccion de x: %p\n", (void*)&x);
                printf("Valor de px: %p\n", (void*)px);
                printf("Valor apuntado por px: %d\n", *px);
                break;
            
            case 2:
                printf("antes de duplicar x: %d\n", x); 
                duplicar(px);
                printf("despues %d\n", x);
                break;
            case 3:
                printf("antes x = %d, y = %d\n", x, y);
                intercambiar(&x, &y);
                printf("despues x = %d, y = %d\n", x, y);
                break;
            case 4:
                analizar(x, y, z, &suma, &mayor, &menor);
                printf("suma: %d, mayor: %d, menor: %d\n", suma, mayor, menor);
                break;
            case 0:
                printf("saliendo del programa...\n");
                break;
            default:
                printf("opcion no valida.\n");
                break;
        }
    } while (opcion != 0);
    return 0;
}
