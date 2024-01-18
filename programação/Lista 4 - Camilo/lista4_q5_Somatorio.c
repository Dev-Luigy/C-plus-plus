#include <stdio.h>

float somatorio (float num, float total)
{
	total += num;
	return total;
}

int main ()
{
	int i = 0; // ficará 0 pra sempre, não tem finalizador na questão.
	float total = 0, num = 0;
	while (i == 0)
	{
		scanf ("%f", &num);
		printf ("%.2f\n", somatorio(num, total));
		total = somatorio (num, total);
	}
}
