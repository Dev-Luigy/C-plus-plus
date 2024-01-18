#include <stdio.h>

int main ()
{
	int idade;
	char nome[15];
	scanf ("%s", nome);
	scanf ("%d", &idade);
	printf ("%s", nome);
	if (idade < 12)
	{
		printf (" eh crianca\n");
	}
	else if (idade < 18)
	{
		printf (" eh jovem\n");
	}
	else if (idade < 65)
	{
		printf (" eh adulto\n");
	}
	else if (idade < 1000)
	{
		printf (" eh idoso\n");
	}
	else
	{
		printf (" eh mumia\n");
	}
}
