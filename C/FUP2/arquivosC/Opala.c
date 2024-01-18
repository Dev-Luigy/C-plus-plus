#include <stdio.h>

int main ()
{
	float tempoMinuto, tempoHora, distanciaPercorrida, velocidade, desempenho, consumo;
	
	scanf ("%f %f %f", &velocidade, &tempoMinuto, &consumo);
	tempoHora = tempoMinuto/60;
	distanciaPercorrida = velocidade * tempoHora;
	desempenho = distanciaPercorrida / consumo;
	printf ("%.2f\n", desempenho);
}
