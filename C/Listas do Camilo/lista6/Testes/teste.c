#include <stdio.h>
#include <stdlib.h>

int ** getMatriz(int linhas, int colunas)
{   
    int **matriz = malloc(linhas * (sizeof (int*))); 
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = malloc(colunas * sizeof(int));
    }
    return matriz;
}



int main ()
{
    int somaPadrao = 0;
    int ** a = getMatriz(3, 3);
    int * b = *getMatriz(4, 5);
    *(*(a + 2) + 2) = 12;
    for (int i = 0; i < 3; i++) 
    {
        for (int y = 0; y < 3; y++)
        {
            printf ("%d ", *(*(a + i) + y));
        }
    }
    printf ("\n");
    *(b+19) = 15;
    for (int i = 0; i < 20; i++) { printf ("%d ", *(b+i)); }
    free(a);
    free(b);
}