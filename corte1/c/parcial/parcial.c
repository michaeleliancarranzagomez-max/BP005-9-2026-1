#include <stdio.h>
int main(){

   int monitor,matricula, carne, aprobo, codigo;
   float nota1, nota2, nota3, promedio;
   double valormat;
   char nombre [40];
   char inicial;

   printf("digita tu nombre completo ");
   fgets(nombre,sizeof(nombre),stdin);

   printf("Digite su codigo de estudiante ");
   scanf("%d", &codigo);

   printf("estas matriculado\n");
   printf("0  no\n");
   printf("1  si\n");
   scanf("%d",&matricula);

   printf("escribe la inicial de tu apellido ");
   scanf(" %c", &inicial);

    //para relajar el codigo un espacio =)

   printf("escribe tu primer nota ");
   scanf("%f", &nota1);
  
   printf("nota 2 ");
   scanf("%f", &nota2);
  
   printf("nota 3 ");
   scanf("%f", &nota3);

   if (matricula != 0 && matricula != 1){
     printf("valor no aceptado");

   }else if ( matricula == 1){
     printf("cuanto pagas de matricula ");
     scanf("%lf", &valormat);

    }else{
     printf("no eres estudiante");
     }

   if(codigo % 2 == 0){
     printf("tu codigo es par\n");
   }else{
      printf("tu codigo es impar\n");
    }

   // otro espacio de paz °__°

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
}
