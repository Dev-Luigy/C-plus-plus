#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ** multiplica(int**m1, int l1, int c1, int**m2, int l2, int c2)
{
    int ** matrizresultado = (int **) malloc (l1 * sizeof(int*));
    for (int i = 0; i < l1; i++) matrizresultado[i] = (int *) malloc (sizeof(int) * c2);

    for(int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            *(*(matrizresultado + i)+j) = 0;
            for (int k = 0; k < l2; k++)
            {
                *(*(matrizresultado + i)+j) += (*(*(m1 + i) + k)) * (*(*(m2 + k) + j));
            }
        }
    }

    return matrizresultado;
}

int ** criaMatriz (int linhas, int colunas)
{
    int ** matriz = (int **) malloc (linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) matriz[i] = (int *) malloc (sizeof(int) * colunas);
    return matriz;
}

int main ()
{
    srand(time(NULL)); //rand temp.
    int ** matriz1 = criaMatriz (4, 2);
    int ** matriz2 = criaMatriz (2, 4);

    for (int i = 0; i < 2; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            *(*(matriz1 + y)+i) = (rand() % 100) + 1;
            *(*(matriz2 + i)+y) = (rand() % 100) + 1;
        }
    }

    int ** matrizresultado = multiplica(matriz1, 4, 2, matriz2, 2, 4);

    for (int i = 0; i < 4; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf ("%-6d", matrizresultado[i][y]);
        }
        printf ("\n");
    }

    free (matrizresultado);
    free (matriz1);
    free (matriz2);
}