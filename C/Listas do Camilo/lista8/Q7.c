#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL)); //rand temp.
    int N = 0; scanf ("%d", &N);
    int * vetor = malloc(N * sizeof(int));
    
    for (int i = 0; i < N; i++)
    {
        *(vetor + i) = (rand() % 100) + 1;
        printf ("%-4d", *(vetor + i));
        if ((i + 1) % 5 == 0 && i != 0) printf ("\n");
    }
    printf ("\n");
    
}