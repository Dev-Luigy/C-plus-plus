#include <stdio.h>

int main () 
{
    int quantOperarios, quantGritos;    scanf ("%d %d", &quantOperarios, &quantGritos);     quantGritos++, quantOperarios++;
    int Operarios[quantOperarios], ordemAtual[quantGritos];
    for(int i = 0; i <= quantOperarios - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &Operarios[i]);
    }
    for(int i = 0; i <= quantGritos - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &ordemAtual[i]);
    }
    for(int i = 0; i <= quantGritos - 2; i++) //mudar Variavel e completar.
    {
        for(int i2 = 0; i2 <= quantOperarios - 2; i2++) //mudar Variavel e completar.
        {
            if(i2 > 0)
            {
                if (Operarios[i2 + 1] == ordemAtual[i] || Operarios[i2 - 1] == ordemAtual) Operarios[i2] *= -1;
            }
        }
    }
    for(int i = 0; i <= quantOperarios - 2; i++) //mudar Variavel e completar.
    {
        if (i == 0) printf ("[");
        i == quantOperarios - 2 ? printf ("%d]\n", Operarios[i]) : printf ("%d ", Operarios[i]);
    }
}