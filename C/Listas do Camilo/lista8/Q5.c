#include <stdio.h>

int * primeiroPrimo(int *vetor)
{
    int counter = 0;
    do
    {
        counter = 0;
        for (int i = 1; i <= *vetor; i++)
        {
            if (*vetor % i == 0) counter++;
        }
        if (counter == 2) return vetor;
    } while (*++vetor);
    
}

int main ()
{
    int vetor[] = {1, 4, 6, 8, 10, 11, 2};
    int * primeiro = primeiroPrimo(vetor);
    printf ("%d", * primeiro);
}