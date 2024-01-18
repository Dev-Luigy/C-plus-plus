#include <stdio.h>

int main () 
{
    int quantParedes = 0; scanf ("%d", &quantParedes); quantParedes ++;
    int Paredes[quantParedes], countParede = 0;
    for(int i = 0; i <= quantParedes - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &Paredes[i]);
        if (i > 0)
        {
            if (Paredes[i] > Paredes[i - 1]) countParede++;
            if (Paredes[0] <= Paredes[1] && i == 1) countParede++;
        }
    }
    printf ("%d\n", countParede);
}