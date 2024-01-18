#include <stdio.h>
#include <string.h>

struct pessoas
{
    char nome[10];
    int idade;
    char sexo[1];
};

int main ()
{
    int n = 0; scanf ("%d", &n);
    int quantMulheres, maiorIdade = quantMulheres = 0;
    struct pessoas pessoas[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%s %d %c", pessoas[i].nome, &pessoas[i].idade, pessoas[i].sexo);
        maiorIdade = (pessoas[i].idade > maiorIdade && pessoas[i].sexo[0] == 'f')? pessoas[i].idade : maiorIdade ;
        quantMulheres += pessoas[i].sexo[0] == 'f' ? 1 : 0;
    }
    
    if (quantMulheres == 0) { printf ("nao tem mulher\n"); return 0; } // encerra.
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (pessoas[i].idade == maiorIdade && pessoas[i].sexo[0] == 'f') { printf ("%s", pessoas[i].nome); break; }
        }
    }
}