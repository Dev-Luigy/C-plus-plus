#include <stdio.h>

int main()
{
	int A, B, Total = 0;
	scanf ("%d %d", &A, &B);
	while (A <= B)
	{
		if (A % 6 == 0)
		{
			Total += A;
		}
		A++;
	}
	printf ("%d\n", Total);
}
