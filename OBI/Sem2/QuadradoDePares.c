#include<stdio.h>

int main ()
{
    int Numero = 0; scanf ("%d", &Numero);
    int i = 0;
    for (i = 1; i <= Numero; i++)
    {
        if (i % 2 == 0) printf ("%d\n", i * i);
    }
}