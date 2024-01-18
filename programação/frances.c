#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char printaString (char * vetor, int tamanho, int i)
{
	if (i > tamanho - 1) exit(0);
	short isVogal = vetor[i+1] == 'a' || vetor[i+1] == 'e' || vetor[i+1] == 'i' || vetor[i+1] == 'o' || vetor[i+1] == 'u';
	short isSpace = vetor[i] == ' ';
	
	if (isSpace)
	{
		if (isVogal && vetor[i-1] == vetor[i+1])
		{
			i+=2;
			return printaString(vetor, tamanho, i);
		}
	}
	else
	{
		printf ("%c", vetor[i++]);
		return printaString(vetor, tamanho, i);
	}
}

int main ()
{
	char frase[41] = "o orvalho ouviu uniformemente e eu uivei";
	printaString(frase, strlen(frase), 0);
}
