#include <stdio.h>
#include <stdlib.h>


long long int fat(int n)
{
    if (n == 1) return 1;
    else return n + fat(n-1);
}

int main ()
{
    int quanTest = 0; scanf ("%d", &quanTest);
    do
    {
        int tamX, tamY = tamX = 0; scanf ("%d%d", &tamX, &tamY);
        long long int soma = fat(tamY);
        soma += tamY * fat(tamX) - tamY;
        printf("%lld\n", soma);
    } while (--quanTest);
}