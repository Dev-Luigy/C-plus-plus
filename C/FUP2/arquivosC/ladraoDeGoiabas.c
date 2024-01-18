#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	int c, b, g, m, axiliar;
	float fc, fb, fg, fm, faxiliar;
	
	scanf ("%d", &c);
	scanf ("%d", &b);
	scanf ("%d", &g);
	scanf ("%d", &m);
	fc = c;
	fb = b;
	fg = g;
	fm = m;
	faxiliar = (fb+fg+fm)/fc;
	if((b+g+m) % c != 0)
	{
		axiliar = faxiliar + 1;
		printf ("%d\n", axiliar);
	}
	else
	{
		printf ("%.0f\n", faxiliar);
	}
}
