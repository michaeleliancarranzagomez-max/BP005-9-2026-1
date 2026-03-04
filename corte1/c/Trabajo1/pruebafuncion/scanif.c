#include <stdio.h>
int main() {
   int x,y;
   printf("escribe el primer numero\n ");
   scanf("%d", &x);
   printf("el segundo numero porfavor\n ");
   scanf("%d", &y);
   if (x>y) {
      printf("el número %d es mayor que %d\n", x, y);
   }
   return 0;
}
