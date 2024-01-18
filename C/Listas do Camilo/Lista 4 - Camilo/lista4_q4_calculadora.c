#include <stdio.h>

float calculadora(float num1, float num2,  char operador)
{
	switch (operador)
	{
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			return num1 / num2;
	}
}

int main ()
{
	float num1, num2;
	char operador[2];
	
	scanf ("%f %f %c", &num1, &num2, &operador);
	printf ("%.2f", calculadora(num1,num2,operador[0]));
}
