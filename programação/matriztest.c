#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int matriz[5][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}; //325.
	int i, y = i = 0;
	int yc = 0;
	int counter = 0;
	int i2, y2 = i2 = 5;
	int cons = 0;
	
	int soma = 0; 
	
	for (i = 0; i < --i2; i++)
	{
		y2 = 4 - cons;
		for (y = yc; y <= y2; y++)
		{
			printf ("Y = %d %d, I = %d %d\n", y, y2, i, i2);
			if (y == y2) { soma +=  matriz[i][y]; break; }
			counter++;
			soma +=  matriz[i][y];
			if (y > yc) soma +=  matriz[y][i];
			if (i2 > i && y2 > y)
			{
				soma += matriz[i2][y2];
				soma += matriz[y2--][i2];
			}
		}
		cons++;
		yc++;
	}
	printf ("%d\n", soma);
	printf ("%d\n", counter);
}
