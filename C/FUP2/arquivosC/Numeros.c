#include <stdio.h>

int main ()
{
	int A, B, Count = 0, Resp = 0;
	scanf ("%d %d", &A, &B);
	
	int Array[B-1];
	while (Count <= B - 1)
	{
		scanf ("%d", &Array[Count]);
		Count++;
	}
	
	Count = 0;
	while (Count <= B - 1)
	{
		if (Array[Count] == A)
		{
			Resp += 1;
		}
		Count++;
	}
	printf ("%d", Resp);
}
