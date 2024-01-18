#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));
	int numeroJogador, numeroComputador, flag = 0;
	while (numeroJogador)
	{
		flag == 0 ? printf ("Opções: 0 –sair, 1 –Papel, 2 –Pedra, 3 -Tesoura\n") : printf ("\nOpções: 0 –sair, 1 –Papel, 2 –Pedra, 3 -Tesoura\n");
		flag ++;
		
		numeroComputador = rand () % 3 + 1;
		//printf ("%d\n", numeroComputador);
		scanf ("%d", &numeroJogador);

		if (numeroJogador == 1) 
		{ 
			if (numeroComputador == 2)  { printf ("Você jogou Papel, CPU jogou Pedra, você ganhou.\n"); } 
			else if ( numeroComputador == 3 ) { printf ("Você jogou Papel, CPU jogou Tesoura, você perdeu.\n"); } 
			else { printf ("Você jogou Papel, CPU jogou Papel, empate.\n"); } 
		}
		if (numeroJogador == 2) 
		{ 
			if (numeroComputador == 1)  { printf ("Você jogou Pedra, CPU jogou Papel, você perdeu.\n"); } 
			else if ( numeroComputador == 3 ) { printf ("Você jogou Pedra, CPU jogou Tesoura, você ganhou.\n" );} 
			else { printf ("Você jogou Pedra, CPU jogou Pedra, empate.\n"); } 
		}
		if (numeroJogador == 3) 
		{ 
			if (numeroComputador == 1)  { printf ("Você jogou Tesoura, CPU jogou Papel, você ganhou.\n"); } 
			else if ( numeroComputador == 2 ) { printf ("Você jogou Tesoura, CPU jogou Pedra, você perdeu.\n"); } 
			else { printf ("Você jogou Tesoura, CPU jogou Tesoura, empate.\n"); } 
		}
	}
}
