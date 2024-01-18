#include <stdio.h>

int main ()
{
	int N, X, Y, S;
	char C[1];
	scanf ("%d %d %d %c %d", &N, &X, &Y, C, &S);
	if (C[0] == 'U')
	{
		Y = (Y - S) % N;
		Y = Y < 0 ? N + Y : Y;
	}
	else if (C[0] == 'D')
	{
		Y = (Y + S) % N;
	}
	else if (C[0] == 'R')
	{
		X = (X + S) % N;
	}
	else if (C[0] == 'L')
	{
		X = (X - S) % N;
		X = X < 0 ? N + X : X;
	}
	printf ("%d %d\n", X, Y);
}
