#include <stdio.h>
int main(){
   int opcion;
   printf("menu de opciones.\n");
   printf("1  saludar.\n");
   printf("2  mostrar mensaje.\n");
   printf("3  salir.\n");

   printf("selecciona una opcion.\n");
   scanf("%d", &opcion);

   switch(opcion){
     case 1:
       printf("buenos dias");
     break;
     case 2:
       printf("ten un gran dia");
     break;
     case 3: 
       printf("saliendo del programa");
     break;
     default:
       printf("opcion no valida");
   }
return 0;
}
