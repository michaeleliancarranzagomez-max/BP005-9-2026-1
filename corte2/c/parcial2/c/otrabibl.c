#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i;
    int *datos = NULL;
    printf("¿cuantos enteros desea guardar?\n");
    scanf(" %d", &n);
    datos = malloc(n * sizeof(int));
    if (datos == NULL)
    {
       printf("no se pudo guardar la informacion\n");
       return 1;    /* code */
    }
    for ( i = 0; i < n; i++)
    {
        printf("ingrese el dato[%d] ",i);
        scanf("%d",&datos[i]);
    }
    printf("mostrando datos\n");
    for ( i = 0; i < n; i++)
    {
        printf("dato [%d] = %d ",i, datos[i]);
    }
    free(datos);
    datos = NULL;
    return 0;
}
