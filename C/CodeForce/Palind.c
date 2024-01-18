#include <stdio.h>
#include <stdlib.h>

long long int powa (long long int n, long long int e)
{
    long long int total = 1;

    for (; e; e--) { total = n * total; }
    //printf ("total = %lld\n", total);
    return total;
}

long long int palind(long long int n)
{
    long long int invertido, ultimo = invertido = 0;
    long long int numero = n;
    int count = 0;
    while (numero)
    { 
        ++count;
        ultimo = numero % 10;
        invertido = (invertido * 10) + ultimo;
        numero/=10;
    }
    //printf ("count = %d\n", count);
    return invertido == n ? 1 : 0;
}

int main ()
{
    int quanTest = 0; scanf ("%d", &quanTest);
    do
    {
        long long int tamNum, Num = tamNum = 0; scanf ("%lld%lld", &tamNum, &Num);
        for (long long int i = powa(10, tamNum)/10; i < powa(10, tamNum + 1)/10 - 1; i ++)
        {
            if (palind(i + Num)) { Num = i; break; }
        }
        printf ("%lld\n", Num);
    } while (--quanTest);
    
}