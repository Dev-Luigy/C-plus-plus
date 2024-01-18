#include <stdio.h>

int main ()
{
    int quantVezes, L = 0, C = 0; scanf ("%d", &quantVezes);
    int aViagens[quantVezes];
    int i = 0, total = 0;
    for (i = 0; i < quantVezes; i++)
    {
        scanf ("%d %d",&L, &C);        
        if (L > C) total += C;
    }
    printf ("%d\n", total);
}