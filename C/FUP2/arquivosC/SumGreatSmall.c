#include <stdio.h>

int main ()
{
    int Calcas[5], Menor = 0, Maior = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf ("%d", &Calcas[i]);
        Menor = i == 0 ? Calcas[i] : Menor;
        Maior = i == 0 ? Calcas[i] : Maior;
        if (Menor >= Calcas[i]) { Menor = Calcas[i]; }
        if (Maior <= Calcas[i]) { Maior = Calcas[i]; }
    }
    printf ("%d\n", Maior + Menor);
}