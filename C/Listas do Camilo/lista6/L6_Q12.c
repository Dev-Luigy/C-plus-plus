#include <stdio.h>

int main ()
{
    int matriz[4][5]; int numCasas = 20;
    int numEntrada = 0;
    int i2, i = i2 = 0;

    int parLinha, parColuna = parLinha = 0;
    int imparLinha = 1, imparColuna = 0;

    do
    {
        scanf ("%d", &numEntrada);

        if (numEntrada % 2 == 0 && parLinha < 4 && parColuna < 5)
        {
            matriz[parLinha][parColuna++] = numEntrada;
            parLinha += parColuna == 5 ? 2 : 0; // parColuna chegou a 5, linha + 1;
            parColuna%=5; // trava o valor de parColuna entre 0 e 4;
            numCasas --;
        }
        else if (numEntrada % 2 == 1 && imparLinha < 4 && imparColuna < 5)
        {
            matriz[imparLinha][imparColuna++] = numEntrada;
            imparLinha += imparColuna == 5 ? 2 : 0; // imparColuna chegou a 5, linha + 1;
            imparColuna%=5; // trava o valor de imparColuna entre 0 e 4;
            numCasas --;
        }
        else printf ("\nSem espaço.\n");
    }while (numCasas > 0);



    
    for (i = 0; i < 4; i++)
    {
        for (i2 = 0; i2 < 5; i2++)
        {
            printf ("%3d ", matriz[i][i2]);
        }
        printf ("\n");
    }
}