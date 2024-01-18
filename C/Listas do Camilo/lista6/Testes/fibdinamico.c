#include <stdio.h>
#include <stdlib.h>

int fib(int * array,int n)
{
    if (array[n] > 0) return (array[n]);
    array[n] = fib (array, n - 1) + fib (array, n - 2);
    return array[n];
}

int main ()
{
    int buscado = 0;
    scanf ("%d", &buscado);
    int * array = calloc(sizeof(int), --buscado);
    array[0] = array[1] = 1;
    printf ("%d", fib (array, buscado));
}