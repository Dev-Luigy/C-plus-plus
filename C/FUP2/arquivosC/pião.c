#include <stdio.h>

int main ()
{
    int limite = 0, quantJogadores = 0, Menor = 0, idMenor = 100, idPerdedor = 100, Maior = 100, idMaior = 0;
    scanf ("%d %d", &limite, &quantJogadores);
    quantJogadores ++;
    int jogadaJogador[quantJogadores], pontuacaoJogador[quantJogadores];
    for (int i = 0; i < quantJogadores - 1; i++)
    {
        scanf ("%d", &jogadaJogador[i]);
        jogadaJogador[i] *= jogadaJogador[i] < 0 ? -1 : 1 ; 
        pontuacaoJogador[i] = limite - jogadaJogador[i];
        if (pontuacaoJogador[i] >= Menor) { Menor = pontuacaoJogador[i]; idMenor = i; };
        if (pontuacaoJogador[i] <= Maior) { Maior = pontuacaoJogador[i]; idMaior = i; };
    }
    if (Maior < 0 && Menor < 0 || idMenor == 100) { printf ("nenhum\n%d\n", idMaior); }
    else { printf ("%d\n%d\n", idMenor, idMaior); }
}