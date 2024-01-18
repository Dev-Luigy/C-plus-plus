#include <stdio.h>

int main ()
{
    int quantidadeJogadas, pPrimeiro = 0, pSegundo = 0;
    scanf ("%d", &quantidadeJogadas);
    quantidadeJogadas ++;
    float idJogadores[3][quantidadeJogadas], respostas[3][quantidadeJogadas];
    char Segundo[quantidadeJogadas];
    // idJogadores [ 0 ] = preço dos produtos.
    for (int i = 0; i < 2; i++)
    {
        for (int jogadas = 0; jogadas < quantidadeJogadas - 1; jogadas ++)
        {
            scanf ("%f", &idJogadores[i][jogadas]);
        }
    }
    for (int jogadas = 0; jogadas < quantidadeJogadas - 1; jogadas ++)
    {
        scanf (" %c", &Segundo[jogadas]);
    }

    //invertido.
    for (int i = 0; i < quantidadeJogadas - 1; i++)
    {
        for (int jogadas = 0; jogadas < 2; jogadas ++)
        {
            respostas[i][jogadas] = idJogadores[jogadas][i];
        } 
    }

    //verifica respostas
    for (int i = 0; i < quantidadeJogadas - 1; i++)
    {
        //printf ("\n%f %f %c\n", respostas[i][0], respostas[i][1], Segundo[i]);
        if (Segundo[i] == 'm' && respostas[i][0] > respostas[i][1]) { pPrimeiro ++; }
        else if (Segundo[i] == 'm' && respostas[i][0] < respostas[i][1]) { pSegundo ++; }
        else if (Segundo[i] == 'M' && respostas[i][0] > respostas[i][1]) { pSegundo ++; }
        else if (Segundo[i] == 'M' && respostas[i][0] < respostas[i][1]) { pPrimeiro ++; }
        else if (respostas[i][0] == respostas[i][1]) { pPrimeiro++; }
        //printf ("%d %d\n", pPrimeiro, pSegundo);
    }

    if (pPrimeiro > pSegundo) { printf ("primeiro\n"); }
    else if (pPrimeiro < pSegundo) { printf ("segundo\n"); }
    else { printf ("empate\n"); }
}