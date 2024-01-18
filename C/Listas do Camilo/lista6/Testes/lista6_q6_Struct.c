#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno
{
    double matricula;
    double notas[4];
    double media;
    char situacao[100];
};

void imprimir_Aluno(struct aluno aluno)
{
    printf("%10.0f", aluno.matricula);
    for(int i = 0; i < 4; i++) printf("%10.2f", aluno.notas[i]);
    printf ("%10.2f", aluno.media);
    printf ("%15s\n", aluno.situacao);
}

int main ()
{
    struct aluno alunos[10]; //vetor de "objetos"
    float * colunas = calloc(sizeof(float), 4); //vetor iniciado a 0.

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf\n", &alunos[i].matricula);
        for (int y = 0; y < 4; y++) 
        { 
            scanf("%lf", &alunos[i].notas[y]); 
            alunos[i].media += alunos[i].notas[y]; 
            colunas[y] += alunos[i].notas[y]; 
        }

        alunos[i].media = alunos[i].media/4; //divisão de média por 4.

        //abaixo a situação do aluno sendo enviada para a string situacao.
        if (alunos[i].media < 4) strcpy(alunos[i].situacao, "Reprovado!");
        else if (alunos[i].media >= 4 && alunos[i].media < 7) strcpy(alunos[i].situacao, "A.Final!");
        else strcpy(alunos[i].situacao, "Aprovado!");
    }
    
    printf ("%12s%10s%10s%10s%10s%10s\t%13s\n",
            "Matricula:", "Nota 1:", "Nota 2:", "Nota 3:", "Nota 4:", "Média:", "Situação:");
    for (int i = 0; i < 10; i++) imprimir_Aluno(alunos[i]);
    

    float mediageral = 0;
    for (int i = 0; i < 4; i++) mediageral += colunas[i];
    printf ("%11s%10.2f%10.2f%10.2f%10.2f%10.2f\n",
            "Média:", (colunas[0]/10), (colunas[1]/10), (colunas[2]/10), (colunas[3]/10), (mediageral/40));
}