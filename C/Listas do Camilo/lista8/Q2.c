#include <stdio.h>


//trará a posição da memória do maior valor entre 2 arrays.
int * maiorValor (int *a , int *b)
{
    int maiorA = 0;
    int * ptrMaiorA;
    int maiorB = 0;
    int * ptrMaiorB;
    int * Maiorptr;
    do
    {
        if (*a > maiorA) { maiorA = *a; ptrMaiorA = a; }
    } while (*a++);

    do
    {
        if (*b > maiorB) { maiorB = *b; ptrMaiorB = b; }
    } while (*b++);

    Maiorptr = *ptrMaiorA > *ptrMaiorB ? ptrMaiorA : ptrMaiorB;

    return Maiorptr;
}

//entre 2 numeros inteiros.
int * maiorValor2Num (int *a , int *b)
{
    if (*a > *b) return a;
    else return b;
}

int main ()
{
    int arrayA[] = {1, 2, 3, 4, 5};
    int arrayB[] = {2, 4, 5, 6, 7};
    int * Maior = maiorValor(arrayA, arrayB);
    printf ("%d", * Maior);


    int a = 50;
    int b = 100;
    printf ("\n%d", *maiorValor2Num(&a, &b));
}