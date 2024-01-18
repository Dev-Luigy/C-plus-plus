#include <stdio.h>

void trunca(double * vetor, int tamanho)
{
    --tamanho;
    do
    {
        *(vetor + tamanho) = (int) *(vetor + tamanho);
    } while (tamanho--);
}

int main ()
{
    double vetor[5] = {1.25, 2.45, 3.55, 4.65, 5.65};
    trunca(vetor, 5);
    for(int i = 0; i < 5; i++) printf ("%.2f ", vetor[i]);
}