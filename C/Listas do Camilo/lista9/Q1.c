#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char endereco[50];
    char telefone[15];
    float altura;
    char DataNasc[10];
    float Massa;
} Paciente;

Paciente setPaciente (Paciente *p)
{
    printf ("Digite o nome do paciente: \n");
    fgets(p->nome, 50, stdin);
    printf ("Digite o endereço do paciente: \n");
    fgets(p->endereco, 50, stdin);
    printf ("Digite em sequencia as respectivas informações do paciente: Telefone; Altura; Data de Nascimento e Massa; \n");
    scanf ("%d%f%s%f", &p->telefone, &p->altura, p->DataNasc, &p->Massa);
    printf ("\n");
    fgetc(stdin);
}

Paciente printPaciente(Paciente *p)
{
    printf ("Nome: \n");
    printf ("%s\n", p->nome);
    printf ("Endereço: \n");
    printf ("%s\n", p->endereco);
    printf ("%-15s%-5s\t%-15s%-5s\n",
    "Telefone:", "Altura:", "Nascimento:", "Massa:");
    printf ("%-15d%-5.2f\t%-15s%-5.2f\n", p->telefone, p->altura, p->DataNasc, p->Massa);
}


int main ()
{
    printf ("Defina a quantidade de pacientes: \n");
    int quantPacientes = 0; scanf ("%d", &quantPacientes);
    fgetc(stdin);
    Paciente pacientes[quantPacientes];
    for (int i = 0; i < quantPacientes; i++)
    {
        setPaciente(&pacientes[i]);
    }

    for (int i = 0; i < quantPacientes; i++)
    {
        printPaciente(&pacientes[i]);
    }
}