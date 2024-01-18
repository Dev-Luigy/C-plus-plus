#include <stdio.h>

int main ()
{
    int quantLimoes, preco; scanf ("%d %d", &quantLimoes, &preco);
    int total = preco;
    int i = 0;
    for (i = 0; i < quantLimoes - 1; i++)
    {
        if (preco > 1) preco -= 1;
        else preco = 1;
        total += preco;
    }
    printf ("%d", total);
}