#include <stdio.h>
#include <stdlib.h>

int main ()
{
	long long int cpf = 0;
	long long int Oldcpf = 0;
	long long int soma = 0;
	int i = 0;
	scanf ("%lld", &cpf);
	cpf *= 10;
	Oldcpf = cpf;
	
	for (i = 2; i <= 10; i++)
	{
		soma += (Oldcpf % 10) * i;
		Oldcpf /= 10;
		soma *= 10;
	}
	
	cpf += soma % 11 == 0 || soma % 11 == 1 ? 0 : 11 - (soma % 11);
	cpf *= 10;
	Oldcpf = cpf;
	
	for (i = 2; i <= 11; i++)
	{
		soma += (Oldcpf % 10) * i;
		Oldcpf /= 10;
		soma *= 10;
	}
	
	cpf += soma % 11 == 0 || soma % 11 == 1 ? 0 : 11 - (soma % 11);
	printf ("%.11lld", cpf);
}
