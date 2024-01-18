#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}

int procbinario (int *array, int n, int inicio, int numproc)
{
	int fim = n;
	int meio = (fim + inicio)/2;
	if (array[meio] == numproc) return meio + 1;
	else if (array[meio] > numproc) return procbinario(array, meio - 1, inicio, numproc);
	else if (array[meio] < numproc) return procbinario(array, n, meio + 1, numproc);
}

int main ()
{
	int i;
    int array[5] = {1, 3, 7 ,9 ,15};
	qsort(array, 5, sizeof(int), comparador);

    for(i = 0; i <= 4; i++) //mudar Variavel e completar.
    {
        printf ("%d ", array[i]);
    }
    
    printf ("\n");
    printf ("%d\n",procbinario (array, 5, 0, 15));
}
