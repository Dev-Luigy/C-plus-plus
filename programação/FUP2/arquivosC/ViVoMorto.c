#include <stdio.h>

int main () 
{
   int QuantParticipantesInicial = 0, QuantRodadas = 0, TesteAtual = 1, partRodadas = 0, ordem = 0, posicao, acao = 0;
   int arrayParticipantes[100];
   scanf ("%d %d", &QuantParticipantesInicial, &QuantRodadas);
   while (QuantParticipantesInicial || QuantRodadas)
   {
      printf ("Teste %d\n", ++TesteAtual);
      
      for(int i = 0; i < QuantParticipantesInicial; i++) //mudar Variavel e completar.
      {
         scanf ("%d", &arrayParticipantes[i]);
      }

      for(int j = 1; j <= QuantRodadas; j++) //mudar Variavel e completar.
      {
         scanf ("%d %d", &partRodadas, &ordem);

         for(int a = 1; a <= partRodadas; a++) //mudar Variavel e completar.
         {
            scanf ("%d", &acao);

            if (acao == ordem) posicao++;
            else for(int b = posicao + 1; b <= partRodadas; b++) //mudar Variavel e completar.
            {
               arrayParticipantes[b - 1] = arrayParticipantes [b]
            }
         }
      }

      printf ("%d\n\n", arrayParticipantes[0]);

      scanf ("%d %d", &QuantParticipantesInicial, &QuantRodadas);
   }
}