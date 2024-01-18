#include <stdio.h>

int fib (int n)
{
    int num1 = 0, num2 = 1, soma = num1 + num2, i = 0;
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else
    {
        for(i = 3; i <= n; i++) //mudar Variavel e completar.
        {
            num1 = num2;
            num2 = soma;
            soma = num1 + num2;
        }
        return soma;
    }
}

int main () 
{
    int num; scanf ("%d", &num);
    printf ("%d\n", fib(num - 1));
}
