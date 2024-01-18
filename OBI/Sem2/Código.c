#include <stdio.h>

int main ()
{
    int quantNumeros; scanf ("%d", &quantNumeros);
    int array[quantNumeros];
    int i = 0, count = 0;

    for (i = 0; i < quantNumeros; i++)
    {
        scanf ("%d", &array[i]);
        if (i >= 2 && array[i-2] == 1 && array [i - 1] == 0 && array[i] == 0) count ++; 
    }
    printf ("%d\n", count);
}