#include <stdio.h>

int main ()
{
    int vetorA[10], vetorB[9];
    for (int i = 0; i < 10; i++)
    {
        scanf ("%d", &vetorA[i]);
        if (i > 0) vetorB[i - 1] = vetorA[i] - vetorA[i - 1]; 
    }

    for (int i = 0; i < 9 ; i++) printf ("%d ", vetorB[i]);  
    printf("\n");
}