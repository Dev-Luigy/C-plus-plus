#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	float velocidade, desempenhoCarro, distanciaPercorrida, tempoMinutos, tempoHoras, consumoLitros;
	
	scanf ("%f", &velocidade);
	scanf ("%f", &tempoMinutos);
    scanf ("%f", &consumoLitros);
	tempoHoras = tempoMinutos / 60;
	//printf ("Horas %f", tempoHoras);
	distanciaPercorrida = velocidade * tempoHoras;
	//printf ("\nDistancia: %f", distanciaPercorrida);
	desempenhoCarro = distanciaPercorrida / consumoLitros;
	//printf ("\nDesempenho: %f = %f / %f\n", desempenhoCarro, distanciaPercorrida, consumoLitros);
	printf ("%.2f\n", desempenhoCarro);
}

