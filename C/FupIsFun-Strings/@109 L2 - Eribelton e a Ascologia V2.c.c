#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[100]; scanf ("%s", nome);
    int tamNome = strlen(nome), total = 0;
    int i = 0;
    for (i = 0; i < tamNome; i++)
    {
        total += nome[i];
    }
    

    // ascii letras {65 á 90 e 97 á 122}
    int LetraAdicional = 97, testTotal = total;
    for (i = 0; i <= 25; i++)
    {
        total = (total + LetraAdicional + i) % 50;
        if (total == 0) { LetraAdicional += i; printf ("%s%c\n",nome, LetraAdicional); return 0; }
        else { total = testTotal; }
    }
    printf ("sem sorte\n");


}