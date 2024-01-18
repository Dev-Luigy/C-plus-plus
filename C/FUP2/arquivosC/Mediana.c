#include <stdio.h>

int main () 
{
    int quantNotas; scanf ("%d", &quantNotas); quantNotas++;
    float aNotas[quantNotas];
    float Media = 0;
    for(int i = 0; i <= quantNotas - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%f", &aNotas[i]);
    }

    if((quantNotas - 1) % 2 == 0)
    {
        Media = (aNotas[quantNotas/2 - 1] + aNotas[quantNotas/2])/2;
    }
    else
    {
        Media = aNotas[quantNotas/2 - 1];
    }
    printf ("%.2f\n", Media);
}