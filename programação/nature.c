#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int quantest = 0; scanf ("%d", &quantest);
	do
	{
		int quantNum = 0; scanf ("%d", &quantNum);
		int vetor[quantNum];
		int i, y = i = 0;
		int count = 0;
		for (i = 0; i < quantNum; i++) scanf ("%d", &vetor[i]);
		do
		{
			while (vetor[y] < 0) 
			{
				for (i = 0; i < quantNum; i++) vetor[i]++;
				count++;
			}
			if (y == 0 && vetor[y] > 0) 
			{
				while(vetor[y])
				{
					for (i = 0; i < quantNum; i++) vetor[i]--;
					count++;
				}
			}
			if (y > 0 && vetor[y - 1] > 0) 
			{
				while(vetor[y - 1])
				{
					for (i = 0; i <= y; i++) vetor[i]--;
					count++;
				}
			}
			if (y < quantNum - 1 && vetor[y + 1] > 0)
			{
				while(vetor[y + 1])
				{
					for (i = quantNum - 1; i >= y; i--) vetor[i]++;
					count++;
				}
			}
			for (i = 0; i < quantNum; i++) printf ("%d ", vetor[i]);
			printf ("\n");
			y++;
		} while (y < quantNum);
		
		printf ("%d ", count);
	}while (--quantest);
}
