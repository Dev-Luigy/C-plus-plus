#include <stdio.h>
#include <stdlib.h>

float * divideVetores(int * A, int * B, int tamanho)
{
    float * Vetor = (float *) malloc (sizeof(float) * tamanho);
    for (register int i = 0; i < tamanho; i++) Vetor[i] = (float) A[i] / (float) B[i];
    return Vetor;
}

int main ()
{
    int T = 0; scanf ("%d", &T);
    int A[T], B[T];
    printf ("Digite os valores de A: \n");
    for (int i = 0; i < T; i++) scanf ("%d", &A[i]);

    printf ("Digite os valores de B: \n");
    for (int i = 0; i < T; i++) scanf ("%d", &B[i]);
    printf ("\n");
    
    float * C = divideVetores(A, B, T);
    
    for (int i = 0; i < T; i++) printf ("%.2f ", C[i]);
    printf ("\n");

}