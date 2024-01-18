#include <stdio.h>

int main ()
{
    int AlturaAtual = 0, AlturaPoco = 0, QuedaDsc = 0;
    scanf ("%d %d", &AlturaPoco, &QuedaDsc);
    for (int i = 1; AlturaAtual <= AlturaPoco; i++)
    {
        AlturaAtual = 0;
        for (int CountTest = 0; AlturaAtual > -1; CountTest++)
        {
            AlturaAtual += CountTest == 0 ? i : i - (CountTest * 10) - QuedaDsc;
            if (i == AlturaPoco)
            {
                printf ("%d\n", i);
                return 0;
            }
            else if (AlturaAtual >= AlturaPoco)
            {
                printf ("%d\n", i);
                return 0;
            }
        }
    } 
}