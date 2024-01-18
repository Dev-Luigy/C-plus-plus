#include <stdio.h>

int main () 
{
    int QuantTestes = 0, QuantOperarios = 0, AtualOperario = 100, QuantOperariosRepeater = 0, QuantOperariosReset;
    scanf ("%d %d %d", &QuantTestes, &QuantOperarios, &AtualOperario); QuantOperarios++;
    int aOperarios[QuantOperarios];
    for(int i = 0; i < QuantTestes; i++) //mudar Variavel e completar.
    {
        if (i != 0) { scanf ("%d", &QuantOperariosRepeater); scanf ("%d", &AtualOperario);};
        for(int CadOperario = 0; CadOperario < QuantOperarios - 1; CadOperario++) //mudar Variavel e completar.
        {
            scanf ("%d", &aOperarios[CadOperario]);
        }
        for(int Opteste = 0; Opteste < QuantOperarios - 1; Opteste++) //mudar Variavel e completar.
        {
            if (AtualOperario == 0) { if (Opteste == 0) { printf ("["); }; Opteste + 1 == QuantOperarios - 1 ? printf ("%d]\n", aOperarios[Opteste]) : printf ("%d ", aOperarios[Opteste]); }
            else
            {
                if (AtualOperario == aOperarios[Opteste + 1]) { aOperarios[Opteste] *= -1; };
                if (AtualOperario == aOperarios[Opteste - 1]) { aOperarios[Opteste] *= -1; };
                if (Opteste == 0) { printf ("["); }
                Opteste + 1 == QuantOperarios - 1 ? printf ("%d]\n", aOperarios[Opteste]) : printf ("%d ", aOperarios[Opteste]);
            }
        }
    }
}