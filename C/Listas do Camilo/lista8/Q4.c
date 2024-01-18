#include <stdio.h>
#include <stdlib.h>

int * primeirosMultiplosde3(int tamanho)
{
    int * vetor = malloc(tamanho * sizeof(int));
    int i = tamanho - 1;
    tamanho *= 3;
    do
    {
        vetor[i--] = tamanho;
        tamanho -= 3;
    } while (tamanho);

    //Achei essa forma simples de reduzir as execuções, nesse caso executa 4 vezes para encontrar até o 12, em vez de 12 vezes.

    return vetor;
}

int main ()
{
    int * vetor = primeirosMultiplosde3(4);
    for (int i = 0; i < 4; i++) printf ("%d ", vetor[i]);
}