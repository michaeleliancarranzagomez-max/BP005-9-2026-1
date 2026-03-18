#include <stdio.h>
int main(){
   char nombre [30];
   float nota1, nota2, nota3, promedio;

   printf("ingrese el nombre del estudiante: ");
   scanf("%s", nombre);

   printf("ingrese la nota 1 ");
   scanf("%f", &nota1);
   printf("nota 2"),
   scanf("%f", &nota2);
   printf("nota 3");
   scanf("%f", &nota3);

   if((nota1 < 0.0 || nota1 > 5.0)||(nota2<0.0 || nota2>5.0)||(nota3<0.0 || nota3>5.0)){
   printf("\n una o mas notas son imvalidas.\n");
   }else {
      promedio = (nota1 + nota2 + nota3)/3;

      printf("\n Estudiante: %s\n", nombre);
      printf("promedio: %2.f\n", promedio);

      if (promedio< 3.0){
        printf("Resultado: Reprobado.\n");
      }else if 	(promedio< 4.0){
         printf("resultado: aprobado con desempeño aceptable.\n");
      }else if (promedio<4.5){
         printf("resultado buen desempeño.\n");
      }else{ printf("Resultado: Excelente desempeño.\n");
      }
   }
return 0;
}
