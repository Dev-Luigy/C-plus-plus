#include <stdio.h>

int vetorteste(int *array, int n)
{
	int i = 0, i2 = 0, count = 0;
	for (i = 1; i < n; i++)
	{
		count += array[i - 1] != array[i] ? 1 : 0;
	}
	count ++;
	int arrayReturn[count];
	for (i = 0; i < count; i++)
	{
		for (i2 = 0; i2 < i; i2++)
		{
			printf ("%d = %d ?\n", array[i], array[i2]);
			if (array[i] != array[i2]) { arrayReturn[i] == array[i]; break; }
		}
	}
	return arrayReturn;
}

int main ()
{
	int array[5] = {1, 1, 2, 2, 3};
	int *arrayn = vetorteste(array, 5);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arrayn[i]);
	} 
}
