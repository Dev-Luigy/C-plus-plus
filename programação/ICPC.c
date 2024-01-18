#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int quanTest = 0;	scanf ("%d", &quanTest);
	
	do
	{
		int i = 0;
		int y = 0;
		int height = 0;	scanf ("%d", &height);
						fgetc(stdin); //removes \n
		int ids [height];
		int * sum = (int*) calloc (26, sizeof(int)) ; //push alphabet number.
		int result = 0;

		char * text = (char *) malloc (sizeof(char) * 52);
						fgets(text, 52, stdin); //gets string.
						text[strlen(text)] = '\0'; //transform enter in null;
		
		for (i = 0; i < strlen(text) - 1; i++)
		{
			 if (++sum[text[i] - 65] == 1) ids[y++] = text[i] - 65;
		}
		
		result += y;
		
		for (i = 0; i < y;)
		{
			result += sum[ids[--y]];
		}
		
		free(text);
		free(sum);
		printf ("%d\n", result);
	}while (--quanTest);
}
