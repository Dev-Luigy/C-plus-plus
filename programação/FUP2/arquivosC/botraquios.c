#include <stdio.h>

int main () 
{
    int quantNumeros;
    int aNumeros[3][50], quantNumeros1, counter = 0;
    for(int i = 0; i <= 1; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &quantNumeros);
        if (i == 0) quantNumeros1 = quantNumeros;
        for(int i2 = 0; i2 <= quantNumeros - 1; i2++) //mudar Variavel e completar.
        {
            aNumeros[i][i2] = 0;
            scanf ("%d", &aNumeros[i][i2]);
            //printf ("%d i ;%d i2 ; %d aNumeros\n", i, i2, aNumeros[i][i2]);
        }
    }
    for(int i = 0; i <= quantNumeros1; i++) //mudar Variavel e completar.
    {
        for(int i2 = 0; i2 <= quantNumeros; i2++) //mudar Variavel e completar.
        {
            //printf ("%d 1º; %d 2º", aNumeros[0][i], aNumeros[1][i2]);
            if (aNumeros[0][i] == aNumeros[1][i2])
            {
                counter++;
                if (counter == quantNumeros1)
                {
                    printf ("sim\n");
                    return 0;
                }
                break;
            }
            else if (i2 == quantNumeros)
            {
                printf ("nao\n");
                return 0;
            }
            //else { printf ("%d == %d ? %d\n", aNumeros[0][i], aNumeros[1][i2], counter);}
        }
    }


    if (counter == quantNumeros1)
    {
        printf ("sim\n");
    }
}