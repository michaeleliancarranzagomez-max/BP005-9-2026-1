#include <stdio.h>
int main(){
    int m[2][3] = { {8,3,6}, 
                    {2,7,5} };
    //se hacen dos for para leer el arreglo junto a sus respectivas variables i j
    int i, j;
    for(i = 0; i < 2; i++){
        for ( j = 0; j < 3 ; j++)
        {
            printf("el valor [%d][%d] es %d ",i,j, m[i][j]);
        }
        printf("\n");
    }
return 0; 
}
