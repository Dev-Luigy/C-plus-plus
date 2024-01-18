#include <stdio.h>

int retornaParImpar (int n)
{
    return (n&1);
}

int main () 
{
    int Numero; scanf ("%d", &Numero);
    retornaParImpar(Numero) == 1 ? printf ("Impar\n") : printf ("Par\n");
}
