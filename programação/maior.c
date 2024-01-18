#include <stdio.h>

int maior (int *array, int n)
{
	if (n == 1) return array[0];
	else
	{
		int m = maior (&array[1], n - 1);
		printf ("Maior = %d\n", m);
		int i = 0;
		printf ("array = %d\n", array[1]);
		printf ("n = %d => ", n);
		for (i = 0; i <= n - 1; i++)
		{
			printf ("%d ", array[i]);
		}
		printf ("\n\n");
		return (m < array[0] ? m : array[0]);
	}
}

int main ()
{
	int array[5] = {1, 2, 3, 5, 4};
	printf ("%d", maior(array, 5));
}
