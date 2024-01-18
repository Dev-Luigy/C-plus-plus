#include <stdio.h>

void imprimirIMC(float altura, float massa)
{
    float IMC = massa / (altura * altura);
    if (IMC < 16) printf ("Baixo peso (grau I)\n");
    else if (IMC >= 16 && IMC <= 16.99) printf ("Baixo peso (grau II)\n");
    else if (IMC >= 17 && IMC <= 18.49) printf ("Baixo peso (grau III)\n");
    else if (IMC >= 18.5 && IMC <= 24.99) printf ("Peso adequado\n");
    else if (IMC >= 25 && IMC <= 29.99) printf ("Sobrepeso\n");
    else if (IMC >= 30 && IMC <= 34.99) printf ("Obesidade (grau I)");
    else if (IMC >= 35 && IMC <= 39.99) printf ("Obesidade (grau II)");
    else if (IMC >= 40) printf ("Obesidade (grau III)");
}

int main ()
{
    float altura, massa = altura = 0;
    while (1)
    {
        scanf ("%f%f", &altura, &massa);
        imprimirIMC(altura, massa);
    }
}