#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int quantLC = 0; scanf ("%d", &quantLC);
    int matriz[quantLC][quantLC];
    int maior = 0;
    int soma = 0;
    int auxi = 0;

    for (int i = 0; i < quantLC; i++)
    {
        for (int y = 0; y < quantLC; y++)
        {
            scanf ("%d", &matriz[i][y]);
            if (i == 0) maior += matriz[i][y];
        }
    }

    for (int i = 0; i < quantLC * quantLC; i++)
    {
        soma = 0;
        //printf ("i = %d, auxi = %d\n", i, auxi);
        for (int y = 0; y < quantLC; y++)
        {
            if (y != auxi) soma += matriz[i % quantLC][y];
            //printf ("y = %d\n", matriz[i % quantLC][y]);
            //printf ("%d\n", soma);
        }
        auxi += i % quantLC == 0 && i != 0 ? 1 : 0;
        for (int j = 0; j < quantLC; j++)
        {
            if (j != i %quantLC) soma += matriz[j][auxi];
            //printf ("j = %d\n", matriz[j][auxi]);
            //printf ("%d\n", soma);
        }
        
        if (soma > maior) maior = soma;
        //printf ("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
    }

    printf ("%d\n", maior);
}