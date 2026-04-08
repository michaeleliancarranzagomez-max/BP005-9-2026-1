include <stdio.h>

int main(){
   int opcion;

   do{
      printf("\n Menu \n");
      printf("1 saludar\n");
      printf("2 despedirse\n");
      printf("0 salir del programa \n");
      printf("seleccione una opcion\n");

      scanf("%d", &opcion);
      if (opcion ==1){
        printf("hola hello hi ohaio salve esos son tdods los saludos que conosco\n");
      }else if (opcion == 2 ){
        printf("me gusto hablar contigo, que te balla bien adios, arriverderci bye, bueno ya bete\n");
       }else if (opcion == 0 ){
        printf("saliendo del programa\n");
        }else printf("opcion no valida\n");
     } while (opcion != 0);
return 0;
 }
