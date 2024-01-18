#include <stdio.h>

int mdc (int a, int b)
{
	if (b == 0) return a;
	else return mdc(b, a % b);
}

int main ()
{
	int num1 = 0, num2 = 0; scanf ("%d %d", &num1, &num2);
	printf ("%d", mdc(num1, num2));
}
