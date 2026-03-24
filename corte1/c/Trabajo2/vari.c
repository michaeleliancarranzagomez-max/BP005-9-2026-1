#include <stdio.h>
int main(){
   int edad;
   float promedio;
   char inicial;
   char nombre[40];

   printf("ingrese su nombre ");
   fgets(nombre, sizeof(nombre), stdin);

   printf("ingrese su edad ");
   scanf("%d", &edad);

   printf("ingreses su promedio ");
   scanf("%f", &promedio);

   printf("ingrese la inicial de su apellido: ");
   scanf(" %c", &inicial);

   printf("\n Resumen de datos ingresados: \n");
   printf("nombre: %s \n", nombre);
   printf("edad: %d \n", edad);
   printf("promedio: %2.f \n", promedio);
   printf("inicial del apellido: %c\n", inicial);
return 0;
}
