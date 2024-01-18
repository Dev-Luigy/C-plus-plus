#include <stdio.h>

int main ()
{
    int Calcas[5], Menor = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf ("%d", &Calcas[i]);
        Menor = i == 0 ? Calcas[i] : Menor;
        if (Menor >= Calcas[i]) { Menor = Calcas[i]; }
    }
    printf ("%d\n", Menor);
}