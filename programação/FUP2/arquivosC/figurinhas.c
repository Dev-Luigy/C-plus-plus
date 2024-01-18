#include <stdio.h>

int main () 
{
    int quantFigurinhas, quantFigurinhasBaruel, numFigurinhas;
    scanf ("%d %d", &quantFigurinhas, &quantFigurinhasBaruel); quantFigurinhasBaruel++;
    int Baruel[quantFigurinhasBaruel], flag = 0;
    for(int i = 0; i <= quantFigurinhasBaruel - 2; i++)
    {
        scanf ("%d a ", &Baruel[quantFigurinhasBaruel]);
        if (i > 0)
        {
            for(int i2 = 0; i2 < i; i2++) 
            { 
                printf ("%d %d", Baruel[i], Baruel[i2]);
                if (Baruel[i] == Baruel[i2])
                {
                    if (flag == 0) { printf ("%d", Baruel[i]); flag ++;} else { printf (" %d", Baruel[i]); }
                }
            }
        }
    }
    printf ("\n");
    for(int i = 1; i <= quantFigurinhas - 1; i++) 
    {
        if (Baruel[i] == i)
        {
            break;
        }
        else
        {
            i == quantFigurinhas - 1 ? printf ("%d\n", i) : printf ("%d ", i);
        }
    }
}