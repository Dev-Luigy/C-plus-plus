#include <stdio.h>

int main () 
{
    int quantCalcados; scanf ("%d", &quantCalcados); quantCalcados++;
    char pe[2];
    int Calcados[quantCalcados][3], varTroca;
    float coutPares;
    for(int i = 0; i <= quantCalcados - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &Calcados[i][0]); // Numero do par;
        scanf (" %c", pe);
        if (pe[0] == 'D') { Calcados[i][1] = 0; } // Pé direito = 0
        else              { Calcados[i][1] = 1; } // Pé esquerdo = 0
    }
    for(int i = 1; i <= quantCalcados - 2; i++) //mudar Variavel e completar.
    {
        if (Calcados[i][0] < Calcados[i - 1][0])
        {
            varTroca = Calcados[i][0];
            Calcados[i][0] = Calcados[i - 1][0];
            Calcados[i - 1][0] = varTroca;
            varTroca = Calcados[i][1];
            Calcados[i][1] = Calcados[i - 1][1];
            Calcados[i - 1][1] = varTroca;
            i = 0;
        }
    }

    for(int i = 0; i <= quantCalcados - 2; i++) //mudar Variavel e completar.
    {
        printf ("i = %d -> %d - %d\n", i, Calcados[i][0], Calcados[i][1]);
    }

    for(int i = 0; i <= quantCalcados - 2; i++) //mudar Variavel e completar.
    {
        if (i > 0)
        {
            for(int i2 = i - 1; i2 >= 0; i2--) 
            {
                if (Calcados[i][0] == Calcados[i - 1][0] && Calcados[i][1] != Calcados[i - 1][1]) coutPares++, i++;
            }
        }
    }
    printf ("%.0f\n", coutPares);
}