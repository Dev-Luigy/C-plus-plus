#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}

int main ()
{
    int array[10] = {1, 5, 3 ,4 ,6 ,10 ,8 ,9 ,2, 7};
	qsort(array, sizeof(int), 10, comparador);

    for(int i = 0; i <= 9; i++) //mudar Variavel e completar.
    {
        printf ("%d ", array[i]);
    }
}