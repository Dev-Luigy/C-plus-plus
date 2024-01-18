#include <stdio.h>

int main () 
{
	long long Num, i, num1 = 0, num2 = 0, num3 = 0;
	scanf ("%lld", &Num);
	num1=0;
	num2=1;
	num3 = num1+num2;
	for (i = 2; i < Num; i ++)
	{
		num1 = num2;
		num2 = num3;
		num3 = num1+num2;
	}
	printf ("Termo = %lld", num3);
}
