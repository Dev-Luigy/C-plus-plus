#include <stdio.h>

void menorMaior(int *vetor, int *menor, int *maior)
{
    * menor = * maior = * vetor;
    do
    {
        if (* menor > * vetor)  *menor = *vetor;
        if (* maior < * vetor)  *maior = *vetor;
    } while (*++vetor);
}

int main ()
{
    int maior, menor;
    int vetor[] = {3, 2, 1, 4, 5};
    menorMaior(vetor, &menor, &maior);
    printf ("%d e %d", menor,  maior);
}