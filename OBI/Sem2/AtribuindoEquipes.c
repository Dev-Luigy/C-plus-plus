#include <stdio.h>
#include <stdlib.h>

int comparador (const void * a, const void * b)
{
    return ( *(int *)a - *(int *)b );
}

int main ()
{
    int jogadores[4];
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        scanf ("%d", &jogadores[i]);
    }

    qsort(jogadores, 4, sizeof(int), comparador);

    jogadores[0] += jogadores[3];
    jogadores[1] += jogadores[2];

    printf ("\n%d\n", abs(jogadores[0] - jogadores[1]));
}