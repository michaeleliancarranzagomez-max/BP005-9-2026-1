#include <stdio.h>
int main(){

   int monitor,matricula, carne, codigo, algo;
   float nota1, nota2, nota3, promedio;
   double valormat;
   char nombre [40];
   char inicial;

   printf("digita tu nombre completo ");
   fgets(nombre,sizeof(nombre),stdin);

   printf("Digite su codigo de estudiante ");
   scanf("%d", &codigo);

   printf("bienvenido %s\n",nombre);

   printf("estas matriculado\n");
   printf("0  no\n");
   printf("1  si\n");
   scanf("%d",&matricula);

   printf("eres monitor\n");
   printf("0  no\n");
   printf("1  si\n");
   scanf("%d",&monitor);

   printf("muestras carne?\n");
   printf("0  no\n");
   printf("1  si\n");
   scanf("%d",&carne);

   printf("escribe la inicial de tu apellido ");
   scanf(" %c", &inicial);

    //para relajar el codigo un espacio =)

   printf("escribe tu primer nota, acuerdate de el punto ");
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
   
      if(codigo % 2 == 0){printf("tu codigo es par\n");}else{printf("tu codigo es impar\n");}

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
         printf("resultado: aprobado con desempeno aceptable.\n");
      }else if (promedio<4.5){
         printf("resultado buen desempeno.\n");
      }else{ printf("Resultado: Excelente desempeno.\n");
      }
   }
   bool paso (promedio > 3.0);

   if (matricula != 0 && matricula != 1 || monitor != 0 && monitor !=1 || carne != 0 && carne != 1){
   printf("una o mas opciones se respondieron mal ");
   }else{
        if (matricula == 1){
          printf("eres estudiante\n");
          printf("analizando si aprovaste \n");
          if (paso){
            printf("pasaste puedes pasar \n");
          }else{
            printf("lo siento no pasaste no puedes pasar");}}
        else if(matricula == 0 && monitor == 0){
          printf("eres algo de la universidad?\n");
          printf("0 no\n");
          printf("1");
          scanf("%d",&algo);
          if(algo == 0){
            printf("no deberias estar aca no puedes entrar");
          }else{
             printf("no es por dudar pero voy a mirar tus documentos");
             printf("analizando carne");
             if(carne == 0){
               printf("no pudimos confirmar tu identidad lo siento no puedes entrar");
             }else{
               printf("puedes pasar");
              }
           }
        }
    }
   
   //resumen por fin

   printf("resumen\n");
   printf("tu nombre es: %s\n", nombre);
   printf("la inicial de tu apellido es: %c \n", inicial);
   printf("tu codigo es: %d\n", codigo);
   printf("tu promedio es: %2f\n", promedio);
   printf("pagas de matricula %lf\n",valormat);
return 0;
}
