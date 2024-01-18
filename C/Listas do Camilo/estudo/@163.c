#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char numeros[10]; fgets(numeros, 9, stdin);
    int iSenha[strlen(numeros) - 1];
    int quantExecucoes = 0; scanf ("%d", &quantExecucoes);
    int y = 0;
    int maior = 0;

    while(y < strlen(numeros) - 1) iSenha[y] = y++;
    maior = iSenha[y];

    
}