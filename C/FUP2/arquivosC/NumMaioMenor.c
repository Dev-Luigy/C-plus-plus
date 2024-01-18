#include <stdio.h>

int main ()
{
	int A, B, Count = 0, Tam = 0, Max = 0;
	scanf ("%d %d", &A, &B);
	Max = B;
	Tam = ((Max - A) * 2) + 2;

	printf ("[");
	while (Count < Max - 1)
	{
		printf (" %d %d", A, B);
		A++;
		B--;
		Count++;
	}
	printf (" ]\n");
}
