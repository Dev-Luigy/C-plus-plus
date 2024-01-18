#include <stdio.h>

int main ()
{
    int Num = 0, TotalAtual = 1, divCounter = 0, Primo = 2, cCounter = 0;
    scanf ("%d", &Num);
    if (Num % 2 == 0) { printf ("2 "); }
    while (Num % Primo == 0)
    {
        Num /= Primo;
        if (Num % Primo != 0) { printf ("%d\n", cCounter + 1); break;}
        cCounter ++;
    }
    while (Num != 1)
    {
        Primo++;
        if (Num % Primo == 0)
        {
            printf ("%d ", Primo);
            cCounter = 0;
            while (Num % Primo == 0)
            {
                Num /= Primo;
                if (Num % Primo != 0) { printf ("%d\n", cCounter + 1); break;}
                cCounter ++;
            }
        }
    }
}