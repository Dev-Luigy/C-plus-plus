#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int matriz[3][3];
    int aux = 0;
    int somaPadrão = 15;
    int somasLinhas[3] = {0, 0, 0};
    int somasColunas[3] = {0, 0, 0};
    int somaDiagonais[2] = {0, 0};
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        aux = 0;
        for (int y = 0; y < 3; y++)
        {
            scanf ("%d", &matriz[i][y]);
            aux = matriz[i][y];
            somasColunas[i] += aux;
            somasLinhas[y] += aux;
            if (i + y == 2) somaDiagonais[0] += aux;
            if (i == y) somaDiagonais[1] += aux;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        count += somasLinhas[i] == somaPadrão && somasColunas[i] == somaPadrão;
        if (i < 2) count += somaDiagonais[i] == somaPadrão;
    }

    count == 5 ? printf ("Sim\n") : printf ("Não\n");
}