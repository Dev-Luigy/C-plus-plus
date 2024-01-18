#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ** matriz = (int**)malloc(sizeof(int*) * 10);
    for (int i = 0; i < 2; i++) *(matriz + i) = (int*) malloc(2 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        for (int y = 0; y < 2; y++)
        {
            printf ("%5d" , matriz[i][y]);
        }
        printf ("\n");
    }
}