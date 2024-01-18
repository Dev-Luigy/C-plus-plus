#include <stdio.h>

int main () 
{
    int quantCasas, quantCaminhoes; scanf ("%d %d", &quantCasas, &quantCaminhoes); quantCaminhoes++ ,quantCasas++;
    int pontos[quantCaminhoes][4], casa[quantCasas];
    for(int i = 0; i <= quantCaminhoes - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &pontos[i][0]); //Ponto A;
        scanf ("%d", &pontos[i][1]); //Ponto B;
        scanf ("%d", &pontos[i][2]); //Litros.
        for(int i2 = pontos[i][0]; i2 <= pontos[i][1]; i2++) //mudar Variavel e completar.
        {
            if (casa[i2] < 0 || casa[i2] > 100) casa[i2] = 0;
            //printf ("%d casa \n", casa[i2]);
            casa[i2] += pontos[i][2];
        }
    }
    for(int i = 0; i <= quantCasas - 2; i++) //mudar Variavel e completar.
    {
        i != quantCasas - 2 ? printf ("%d ", casa[i]) : printf ("%d\n", casa[i]);
    }
}