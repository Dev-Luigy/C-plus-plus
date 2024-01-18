#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char matriz[3][3];
    int i2, i = i2 = 0;
    int xCounter, oCounter = xCounter = 0;
    int winCount = 0;
    char winner[1];

    for (; i < 3; i++)
    {
        for (i2 = 0; i2 < 3; i2++)
        {
            scanf (" %c", &matriz[i][i2]);
            
            //conversão para X e O.
            if      (matriz[i][i2] == '2') { matriz[i][i2] = 'X'; xCounter ++; }
            else if (matriz[i][i2] == '1') { matriz[i][i2] = 'O'; oCounter ++; }
            else if (matriz[i][i2] == '0') { matriz[i][i2] = '0'; }
        
            // Conferencia de Linhas;
            if (i2 == 2)
            {
                //leia l_a_N como Linha atual coluna N.
                int l_a_0 = matriz[i][0]; int l_a_1 = matriz[i][1]; int l_a_2 = matriz[i][2];
                winCount += l_a_0 == l_a_1 && l_a_0 == l_a_2 && l_a_0 != 48; // retorna 1 ou 0;  48 representa 0 em ascii
                winner[0] = winCount > 0 ? l_a_0 : ' '; //captura o ganhador.
            };
            // Conferencia de Colunas.
            if (i == 2)
            {
                //leia c_a_N como Coluna atual linha N.
                int c_a_0 = matriz[0][i2]; int c_a_1 = matriz[1][i2]; int c_a_2 = matriz[2][i2];
                winCount += c_a_0 == c_a_1 && c_a_0 == c_a_2 && c_a_0 != 48;
                winner[0] = winCount > 0 ? c_a_0 : ' '; //captura o ganhador.
            };
        
        }
        if (i == 2)
        { //dados abaixos só vão ser verificados quando todas as entredas já tiverem sido feitas.
            short Regra1 = abs(xCounter - oCounter) == 1; // Se a diferença entre jogadas for 1;
            short Regra2 = winCount == 1 || winCount == 0; //Só pode ter uma jogada vitoriosa ou nenhuma.

            if (Regra1 && Regra2) { if (winCount > 0) { printf ("Ganhador = %c\n", winner[0]); };printf ("Válido\n"); }
            else printf ("Inválido\n");
        }
    }
    /*
    Casos testes:
    Válido ganhador X
    1	1	2
    1	2	2
    1	2	1

    Válido sem ganhador.       
    2	1	2
    2	1	2
    1	2	1

    Válido ganhador X        
    1	1	1
    2	2	0
    0	0	0
            
    Inválido.        
    1	1	1
    2	2	2
    0	0	0

    Válido ganhados O.        
    2	2	2
    1	1	0
    0	0	0

    */



}