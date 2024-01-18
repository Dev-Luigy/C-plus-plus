#include <stdio.h>

int main ()
{
    int quantParticipantes = 0; scanf ("%d", &quantParticipantes);
    int participantes[quantParticipantes]; 
    
    int vivos = quantParticipantes;
    int maior = quantParticipantes + 2;
    short morreu = 0;

    int assassino = 0; scanf ("%d", &assassino);

    for (int i = 0; i < quantParticipantes; i++)
    {
        participantes[i] = i + 1;
    }

    while (vivos != 1)
    {
        assassino = assassino == quantParticipantes ? 0 : assassino;
        if (!morreu && participantes[assassino] != maior) { participantes[assassino++] = maior; morreu = 1; vivos --; }
        if (morreu && participantes[assassino] != maior) { morreu = 0; assassino++; }
        else assassino ++;
    }

    for (int i = 0; i < quantParticipantes; i++)
    {
        if (participantes[i] != maior)  { printf ("%d\n", participantes[i]); break; }
    }
}