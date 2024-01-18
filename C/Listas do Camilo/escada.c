#include <stdio.h>

int main ()
{
    int l, c = l = 0; scanf ("%d%d", &l, &c);
    int aux = 0;
    int matriz[l][c];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf ("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < l - 1; i++)
    {
        while (!matriz[i][aux]) { if (aux == c - 1) break; aux++; }
        if (matriz[i + 1][aux] != 0)
        {
            printf ("N\n");
            return 0;
        }
    }
    printf ("S\n");
}