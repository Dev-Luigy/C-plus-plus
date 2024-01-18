#include <stdio.h>

int main ()
{
    int quantPostes = 0; scanf ("%d", &quantPostes);
    int aPostes[quantPostes];
    int i = 0;

    int concerto = 0, substituicao = 0;
    for (i = 0; i < quantPostes; i++)
    {
        scanf ("%d", &aPostes[i]);
        if (aPostes[i] < 50) substituicao ++;
        else if (aPostes[i] >= 50 && aPostes[i] < 85) concerto++;
    }
    printf ("%d %d\n", substituicao, concerto);
}