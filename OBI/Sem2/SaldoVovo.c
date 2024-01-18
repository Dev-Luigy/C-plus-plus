#include <stdio.h>

int main ()
{
    int dias = 0, saldo = 0, inDay = 0; scanf ("%d %d", &dias, &saldo);
    int i = 0, menor = saldo;
    for ( i = 0; i < dias; i++)
    {
        scanf ("%d", &inDay);
        saldo += inDay;
        menor = saldo > menor ? menor : saldo;
    }
    printf ("%d", menor);
}