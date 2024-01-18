#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL)); //rand temp.
    int N, M = N = 0; scanf ("%d%d", &N, &M);
    int * vetor = (int *) malloc (N * M * sizeof(int));
    
    for (int i = 0; i < N; i++)
    {
        for (int y = 0; y < M; y++)
        {
            vetor[i*y+y] = (rand() % 100) + 1;
            printf ("%-4d", vetor[i*y+y]);
        }
        printf ("\n");
    }
    free (vetor);
}