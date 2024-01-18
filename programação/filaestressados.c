#include <stdio.h>
#include <stdlib.h>

int comparador (const void *a, const void *b)
{
    return (*(int *)a - *(int*)b);
}

int in (int *array, int n, int inicio, int numproc)
{
    int meio = (n + inicio)/2;
    if (array[meio] == numproc) return 1; //existe.
    else if (array[meio + 1] > numproc && array[meio - 1] < numproc) return 0; // não existe.
    else if (array[meio] > numproc) return in (array, meio - 1, n, numproc);
    else if (array[meio] < numproc) return in (array, n, meio + 1, numproc);
}



int main ()
{
    int array[5] = {1, 3, 7, 2, 6}; 
    int tamArray = sizeof(array)/sizeof(int);
    
    int i;
    
    qsort(array, tamArray, sizeof(int), comparador);
    
    for(i = 0; i <= 4; i++) //mudar Variavel e completar.
    {
        printf ("%d ", array[i]);
    }
    printf ("\n%d", in(array, tamArray, 0, 7));
}
