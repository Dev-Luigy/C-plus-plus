#include <stdio.h>

int main ()
{
	int n1, n2, n3, n4, area1, area2;
	scanf ("%d %d %d %d", &n1, &n2, &n3, &n4);
	area1 = n1 * n2;
	area2 = n3 * n4;
	if (area1 > area2)
	{
		printf ("%d\n", area1);
	}
	else
	{
		printf ("%d\n", area2);
	}
}
