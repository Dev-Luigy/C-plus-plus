#include <stdio.h>

int main ()
{
	int v[10], i = 0, count = 0;
	for (i = 0; i <= 9; i++)
	{
		scanf ("%d", &v[i]);
		count += v[i] % 2 == 0 ? 1 : 0 ;
	}
	printf ("%d\n", count);
}
