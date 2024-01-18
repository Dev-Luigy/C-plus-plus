#include <stdio.h>
#include <string.h>

int buscaVogal (char * array, int tamNome, int * vogais)
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (array[tamNome - 1] == vogais[i]) { return 1; }
    }
    return 0;
}

int contaVogais (char * array, int tamNome, int * vogais)
{
    int i = 0, i2 = 0, total = 0;
    for (i = 0; i < tamNome; i ++)
    {
        for (i2 = 0; i2 < 10; i2 ++)
        {
            if (array[i] == vogais[i2]) total ++;
        }
    }
    return total;
}

int main ()
{
    char nome1[100], nome2[100]; scanf("%s %s", nome1, nome2);
    int tamNome1 = strlen(nome1), tamNome2 = strlen(nome2);
    
    int pontos = 0, vogais[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    int lastIsVogal[2];

    if (nome1[0] == nome2[0]) pontos += 20;
    if (tamNome1 == tamNome2) pontos += 30;
    if (buscaVogal(nome1, tamNome1, vogais) == buscaVogal(nome2, tamNome2, vogais)) pontos += 20;
    if (contaVogais(nome1, tamNome1, vogais) == contaVogais(nome2, tamNome2, vogais)) pontos += 30;
    if (buscaVogal(nome1, tamNome1, vogais) != buscaVogal(nome2, tamNome2, vogais)) pontos -= 10;

    if (pontos < 0) pontos = 0;
    printf ("As chances do crush te dar bola sao: %d%%!\n", pontos);
}