#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 48 á 57 numeros de 0 a 11;

int main ()
{
    char numero[100]; fgets(numero, 100, stdin); int tamNumero = strlen(numero) - 2; // tira o enter e o vazio;
    int i = 0;
    int sImpar, sPar = sImpar = 0;

    for (i = tamNumero; i >= 0; i--)
    {
        if ((tamNumero - i) % 2 == 1) sImpar += (numero[i] - 48);
        else sPar += numero[i] - 48;
    }

    if (sPar == sImpar || abs(sImpar - sPar) % 11 == 0) printf ("sim\n");
    else printf ("nao\n");
}