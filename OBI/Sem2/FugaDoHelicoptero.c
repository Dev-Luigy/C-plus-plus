#include <stdio.h>

int main ()
{
    int P, F, H, D;  scanf ("%d %d %d %d", &H, &P, &F, &D);

    while (1)
    {
        F = (F + D) % 16;
        F = F < 0 ? 15 : F;
        if (F == P) { printf ("N\n"); break; }
        else if (F == H) { printf ("S\n"); break; }
    }
}