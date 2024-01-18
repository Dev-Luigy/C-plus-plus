#include <stdio.h>

int main () 
{
    int quantOperarios, quantGritos;    scanf ("%d %d", &quantOperarios, &quantGritos);     quantGritos++, quantOperarios++;
    int Operarios[quantGritos][quantOperarios], ordemAtual = 0;
    int i = 0, i2 = 0;
    for(i = 0; i <= quantOperarios - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &Operarios[quantGritos - 1][i]);
    }
    for(i = 0; i <= quantGritos - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &Operarios[i][quantOperarios - 1]);
    }
    for(i = 0; i <= quantGritos - 2; i++) //mudar Variavel e completar.
    {
        //printf ("\nOrdem = %d\n",Operarios[i][quantOperarios]);
        for(i2 = 0; i2 <= quantOperarios - 2; i2++) //mudar Variavel e completar.
        {
            if (i == 0)
            {
                Operarios[i][i2] = Operarios[quantGritos - 1][i2];
            }
            else
            {
                Operarios[i][i2] = Operarios[i - 1][i2];
            };
        }
    }
    for(i = 0; i <= quantGritos - 2; i++) //mudar Variavel e completar.
    {
        ordemAtual = Operarios[i][quantOperarios];
        for(i2 = 0; i2 <= quantOperarios - 2; i2++) //mudar Variavel e completar.
        {
            if (i == 0)
            {
                Operarios[i][i2] = Operarios[quantGritos - 1][i2];
            }
            else
            {
                //printf ("\ni = %d, i2 = %d, Operarios[i][i2] = %d, Operarios[i - 1][i2] = %d\n", i, i2, Operarios[i][i2], Operarios[i - 1][i2]);
                Operarios[i][i2] = Operarios[i - 1][i2];
                //printf ("\ni = %d, i2 = %d, Operarios[i][i2] = %d, Operarios[i - 1][i2] = %d\n", i, i2, Operarios[i][i2], Operarios[i - 1][i2]);
            };
            ordemAtual == Operarios[i][i2 + 1] ||  ordemAtual == (Operarios[i][i2 + 1] * -1) ? Operarios[i][i2] *= -1 : Operarios[i][i2];
            ordemAtual == Operarios[i][i2 - 1] ||  ordemAtual == (Operarios[i][i2 + 1] * -1) ? Operarios[i][i2] *= -1 : Operarios[i][i2];
            printf ("\n%d ordem, %d Operarios[i][i2]\n", ordemAtual, Operarios[i][quantOperarios]);
            //printf ("\ni = %d, i2 = %d, Operarios[i][i2] = %d, Operarios[i - 1][i2] = %d\n", i, i2, Operarios[i][i2], Operarios[i - 1][i2]);
        }
    }
    for(i = 0; i <= quantOperarios - 2; i++) //mudar Variavel e completar.
    {
        if (i == 0) {printf ("[");};
        if (i != quantOperarios - 2) printf ("%d ", Operarios[quantGritos - 2][i]);
        else printf ("%d]\n", Operarios[quantGritos - 2][i]);
    }
}
