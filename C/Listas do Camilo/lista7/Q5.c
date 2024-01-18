#include <stdio.h>
#include <string.h>
#include "Q1.c"

int main ()
{
    char texto[100], buscando[1]; scanf ("%s\n%c", texto, buscando);
    busca(texto, buscando);
}