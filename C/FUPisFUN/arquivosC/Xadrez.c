#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	int L, C, Total;
	scanf("%d %d", &L, &C);
	Total = L + C;
	if (Total % 2 == 0)
	{
		printf ("1");
	}
	else
	{
		printf ("0");
	}
}
