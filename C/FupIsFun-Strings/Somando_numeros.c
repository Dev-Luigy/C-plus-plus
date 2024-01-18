#include <stdio.h>
#include <string.h>

int main ()
{
    char texto[100];
    int total = 0;
    fgets(texto, 100, stdin);
    getchar();
    for (int i = 0; i < strlen(texto);i++)
    {
        short Regra1 = texto[i] >= 49 && texto[i] <= 57;
        short Regra2 = texto[i + 1] >= 49 && texto[i + 1] <= 57;
        short Regra3 = texto[i + 2] >= 49 && texto[i + 2] <= 57;
        if (Regra1 && Regra2 && Regra3) { total += ((texto[i] - 48) * 100) + ((texto[i + 1] - 48) * 10) + texto[i + 2] - 48; i+= 2; }
        else if (Regra1 && Regra2) { total += ((texto[i] - 48) * 10) + texto[i + 1] - 48; i++; }
        else if (Regra1) { total += texto[i] - 48; }
    }
    printf ("%d\n", total);
}