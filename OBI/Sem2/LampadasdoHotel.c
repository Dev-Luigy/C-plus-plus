#include <stdio.h>

int main ()
{
    int A[1][2], B[1][2]; int i, i2;
    for (i = 0; i < 1; i++)
    {
        for (i2 = 0; i2 < 2; i2++)
        {
            scanf ("%d", &A[i][i2]);
            scanf ("%d", &B[i][i2]);
        }
    }

    // i2 = 0 Representa o estado atual; i2 = 1 como deve ser o final;
    int AInicial = A[0][0], BInicial = B[0][0];
    int AFinal = A[0][1], BFinal = B[0][1];


    int count = 0;

    if (BInicial != BFinal)
    {
        AInicial = AInicial == 1 ? 0 : 1;

        BInicial = BFinal;

        count ++;
    }

    if (AInicial != AFinal) { AInicial = AFinal; count ++; }

    printf ("%d\n", count);

}