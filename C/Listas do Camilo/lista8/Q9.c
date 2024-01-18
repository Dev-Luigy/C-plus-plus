#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL)); //rand temp.
    int N, M = N = 0; scanf ("%d%d", &N, &M);
    int ** vetor = (int**)malloc(N * sizeof(int*));
    for (int i = 0; i < M; i++) *(vetor + i) = (int*)malloc(M * sizeof(int));
    
    for (int i = 0; i < N; i++)
    {
        for (int y = 0; y < M; y++)
        {
            *(*(vetor + i)+y) = (rand() % 100) + 1;
            printf ("%-4d", *(*(vetor + i)+y));
        }
        printf ("\n");
    }
    free (vetor);
}