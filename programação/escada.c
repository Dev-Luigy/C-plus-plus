#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i, y = i = 0; scanf ("%d %d", &i, &y);
	int k, j = k = 0;
	int aux = 0;
	int matriz[i][y];
	for (; k < i; k++)
	{
		for (j = 0; j < y; j++)
		{
			scanf ("%d", &matriz[k][j]);
		}
	}
	
	for (k = 0; k < i - 1; k++)
	{
		aux = 0;
		while (!matriz[k][aux]) aux++;
		for (j = aux; j < y; j++)
		{
			if (matriz[k+1][j] == 0) break;
			printf ("N\n");
			return 0;
		}
	}
	printf ("S\n");
}
