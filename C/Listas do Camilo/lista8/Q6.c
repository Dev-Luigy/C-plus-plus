#include <stdio.h>

void maiorValor(int *vetor, int **p_maior)
{
    do
    {
        if (**p_maior < *vetor) **p_maior = *vetor;
    } while (*++vetor);
}

int main ()
{
    int vetor[] = {1, 7, 3, 6, 4};
    int * teste = &*vetor; //Sem isso dará error. Precisa iniciar o ponteiro com alguma localização de memória para que não haja problemas de core.
                           //Nesse caso estou iniciando com a primeira casa do vetor.
                           
    maiorValor(vetor, &teste);
    printf ("%d", * teste);
}