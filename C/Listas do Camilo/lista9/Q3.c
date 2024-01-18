#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int Dia;
    int Mes;
}DataAniversario;

typedef struct
{
    char Nome[100];
    char Email[100];
    int Telefone;
    DataAniversario Data;
    char Observacoes[100];
} Contato;

Contato Cadastrar(Contato *p)
{
    int temObservacao = 0;

    printf ("Digite o Nome do Contato: \n");
    fgets(p->Nome, 100, stdin);
    p->Nome[strlen(p->Nome) - 1] = '\0';
    printf ("Digite o seu E-Mail: \n");
    fgets(p->Email, 100, stdin);
    p->Email[strlen(p->Email) - 1] = '\0';
    printf ("Digite o seu telefone: \n");
    scanf ("%d", &p->Telefone);
    printf ("Digite o dia do Aniversário: \n");
    scanf ("%d", &p->Data.Dia);
    printf ("Digite o mês do Aniversário: \n");
    scanf ("%d", &p->Data.Mes);
    printf ("Deseja digitar alguma observação? 1 - Sim | 2 - Não.\n");
    scanf ("%d", &temObservacao);
    fgetc(stdin);
    if (temObservacao == 1)
    {
        printf ("Digite a observação: \n");
        fgets(p->Observacoes, 100, stdin);
    }
    printf ("\n");
}

Contato Exibir (Contato *p)
{
    printf ("Nome do Contato: \n%s\n", p->Nome);
    printf ("E-Mail: \n%s\n", p->Email);
    printf ("Telefone: \n%d\n", p->Telefone);
    printf ("Aniversário: \n%d/%d\n", p->Data.Dia, p->Data.Mes);
    printf ("Observação: \n%s\n", p->Observacoes);
}

void BuscarNome (Contato * Pessoa)
{
    int n = 0;
    printf ("Quem você procura? \n");
    char PessoaBuscada[20];
    scanf ("%s", PessoaBuscada);
    printf ("\n");
    do
    {
        if (!strcmp(Pessoa[n].Nome, PessoaBuscada)) Exibir(&Pessoa[n]);
    } while (++n < 5);
}

void BuscarMesNascimento (Contato * Pessoa)
{
    int n = 0, Mes = 0;
    printf ("Qual o mês do Nascimento? \n");
    scanf ("%d", &Mes);
    printf ("\n");
    do
    {
        if (Pessoa[n].Data.Mes == Mes) Exibir(&Pessoa[n]);
    } while (++n < 5);
}

void BuscarDataNascimento (Contato * Pessoa)
{
    int n = 0, Mes = 0, Dia = 0;
    printf ("Qual o dia do Nascimento? \n");
    scanf ("%d", &Dia);
    printf ("Qual o mês do Nascimento? \n");
    scanf ("%d", &Mes);
    printf ("\n");
    do
    {
        if (Pessoa[n].Data.Mes == Mes && Pessoa[n].Data.Dia == Dia) Exibir(&Pessoa[n]);
    } while (++n < 5);
}

void Menu(register int choice, Contato * Pessoa)
{
    switch (choice)
    {
    case 1:
        BuscarNome(Pessoa);
        break;
    case 2:
        BuscarMesNascimento(Pessoa);
        break;
    case 3:
        BuscarDataNascimento(Pessoa);
        break;
    default:
        break;
    }
}

int main ()
{
    Contato * Pessoas = (Contato *) malloc (5 * sizeof(Contato));
    for (int i = 0; i < 5; i++) Cadastrar(&Pessoas[i]);
    short int choice = 0;
    
    do
    {
        printf ("Como deseja buscar o contato? \n1 - Nome da pessoa.\n2 - Mes de Nascimento.\n3 - Data de Nascimento.\n\n0 - Sair\n");
        scanf ("%hd", &choice);

        Menu(choice, Pessoas);
    } while (choice);
    free (Pessoas);
}