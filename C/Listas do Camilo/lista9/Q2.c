#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Data[10];
} DiaDaSemana;

typedef struct
{
    int codigo;
    float producao;
    float alimentacao;
    char DataNascimento[10];
    DiaDaSemana DiaAnimal;
} Animais;

Animais SetInformacoes(Animais *p, DiaDaSemana Dia, float * melhor)
{
    printf ("Digite o código do Animal: \n");
    scanf ("%d", &p->codigo);
    printf ("Digite a produção do Animal: \n");
    scanf ("%f", &p->producao);
    printf ("Digite a Alimentação do Animal: \n");
    scanf ("%f", &p->alimentacao);
    fgetc(stdin);
    printf ("Digite a Data de Nascimento: \n");
    scanf ("%s", p->DataNascimento);
    strcpy(p->DiaAnimal.Data, Dia.Data);
    *melhor = p->producao > *melhor ? p->producao : *melhor;
    printf ("\n");
}

Animais ImprimirAnimal(Animais *p)
{
    printf ("Código do animal: %d\n", p->codigo);
    printf ("Produção do animal: %.2f\n", p->producao);
    printf ("Alimentação do animal: %.2f\n", p->alimentacao);
    printf ("Data de Nascimento: %s\n", p->DataNascimento);
    printf ("Dados do dia: %s\n", p->DiaAnimal.Data);
}

int main ()
{
    DiaDaSemana Dia;
    Animais Animal[3];

    float melhor = 0;

    printf ("Digite o dia dos dados: \n");
    scanf ("%s", Dia.Data);
    for (int i = 0; i < 3; i++) SetInformacoes(&Animal[i], Dia, &melhor);
    for (int i = 0; i < 3; i++) if (Animal[i].producao == melhor) ImprimirAnimal(&Animal[i]);
}