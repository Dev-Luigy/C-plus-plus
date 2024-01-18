#include <stdio.h>
#include <stdlib.h>

int getSomapadrao(int somapadrao) { return somapadrao; }

int ** getMatriz(int linhas, int colunas)
{   
    int **matriz = (int **)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) matriz[i] = (int*)malloc(linhas * colunas * sizeof(int));
    return matriz;
}


int main ()
{
    int somaPadrao = 0;
    int * a = *getMatriz(3, 3);
    int * b = *getMatriz(4, 5);
    *(a+8) = 12;
    for (int i = 0; i < 9; i++) printf ("%d ", *(a + i));
    printf ("\n");
    *(b+19) = 15;
    for (int i = 0; i < 20; i++) printf ("%d ", *(b+i));
    free(a);
    free(b);
}