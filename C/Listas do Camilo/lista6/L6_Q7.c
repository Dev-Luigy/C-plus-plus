#include <stdio.h>

int main ()
{
    int matriz[3][3];
    int i2, i = i2 = 0;
    int counter = 0;

    for (; i < 3; i++)
    {
        for (i2 = 0; i2 < 3; i2++)
        {
            scanf ("%d", &matriz[i][i2]);
            printf ("%d ", matriz[i][i2]);
        }
        printf ("\n");
    }


    for (i = 0; i < 3; i++)
    {
        for (i2 = 0; i2 < 3; i2++)
        {
            counter += matriz[i][i2] == matriz[i2][i] ? 1 : 0;
        }
    }
    
    if (counter == 9) printf ("simétrica\n");
    else printf ("não simétrica\n");
}