#include <stdio.h>


int main ()
{
	int H, M, D;
	char S[1];
	scanf ("%d %d %c %d", &H, &M, S, &D);
	H = S[0] == 'H' ? ((D * 10) / 60) + H : H - (D * 10 - M) /60;
	H = H % 72;
	M = S[0] == 'H' ? (D * 10) + M: M - (D * 10);
	M = M % 60;
	H = M < 0 ? H - 1 : H;
	H = H < 0 ? H + 12 : H;
	H = H < 0 ? H + 12 : H;
	H = H > 12 ? H - 12 : H;
	M = M < 0 ? M + 60 : M;
	printf ("%02d %02d\n", H, M);
}
