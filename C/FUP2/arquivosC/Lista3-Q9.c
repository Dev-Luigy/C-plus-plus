#include <stdio.h>
#include <math.h>

int main () 
{
	int Numero = 0;
	scanf ("%d", &Numero);
	// verifique se � maior do que zero
	if(Numero <= 0){
		printf("Nao ha multiplicadores");
		return 0;
	}
	// Todo n�mero � divisivel por 1
	printf ("(%d x %d)", 1, Numero);
	
	// repete de 2 at� raiz quadrada do numero
	int raizDeN = (int) sqrt(Numero);
	for (int contador = 2; contador <= raizDeN; contador++)
	{
		// o contador � dividor de N?
		if(Numero % contador == 0) {
			// se for imprime a dupla contador e valor da divis�o
			printf (", (%d x %d)", contador, Numero/contador);
		}
	}
	printf (".\n");
}