#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    long long int cpf = 0; scanf ("%lld", &cpf);
    long long int oldCpf = cpf;
    int soma = 0;
    int i = 1;
    while (i < 10)
    {
        soma += (i++ + 1) * (oldCpf % 10);
        oldCpf /= 10;
    }
    cpf *= 10;
    cpf += soma % 11 == 1 || soma % 11 == 0 ? 0 : 11 - (soma % 11);
    oldCpf = cpf;
    i = 1;
    soma = 0;
    while (i < 11)
    {
        soma += (i++ + 1) * (oldCpf % 10);
        oldCpf /= 10;
    }
    cpf *= 10;
    cpf += soma % 11 == 1 || soma % 11 == 0 ? 0 : 11 - (soma % 11);
    printf ("%.11lld\n", cpf);
}