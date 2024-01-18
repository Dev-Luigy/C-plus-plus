#include<stdio.h>

int main ()
{
    int Numero = 0; scanf ("%d", &Numero);
    int i = 0;
    for (i = Numero; i <= Numero + 12; i++)
    {
        if (i % 2 == 1) printf ("%d\n", i);
    }
}