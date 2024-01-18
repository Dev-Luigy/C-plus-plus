#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int math_pow(int n, int e)
{
    register int total = 1;

    for (; e; e--) { total = n * total; }
    return total;
}

int ** getMatriz(int linhas, int colunas)
{   
    int **matriz;
    for (int i = 0; i < linhas; i++) matriz[i] = (int*)malloc(linhas * colunas * sizeof(int));
    return matriz;
}

int main ()
{
    // printf ("%d", math_pow(5,3));
    // int *m;
    // int target, source;
    // source = 10;
    // m = &source;
    // *m = 50; // mexendo com right value.
    // target = *m;
    // printf ("%d", target);

    // struct trabalhadores
    // {
    //     int idade;
    //     char nome[100];
    //     char genero[1];
    // } emp;

    // struct trabalhadores *p = &emp;
    // fgets(emp.nome, 100, stdin);
    // scanf ("%d", &emp.idade);
    // scanf (" %c", emp.genero);
    
    // struct trabalhadores *l = &emp;
    // fgets(emp.nome, 100, stdin);
    // scanf ("%d", &emp.idade);
    // scanf (" %c", emp.genero);

    // printf ("%d", emp.idade);

    // printf ("%d", rand());
    // char x = getchar;
    // printf ("%d", x);

    // char nome[100];
    // fgets(nome, 100, stdin);
    // // for (; *nome == ' '; nome++); não funciona, porém tem no livro.

    // int * p;
    // int m[1] = {1};
    // p = m;
    // p[0] = 5;
    // printf ("%d, %d", p[0], m[0]);

    // int p[4][3];
    // *(p +( 4 * sizeof(int) )+ 1) = 50;
    // printf ("%d", p[3][2]);

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int i2 = 0; i2 < 3; i2++)
    //     {
    //         printf ("%d ", p[i][i2]);
    //     }
    //     printf ("\n");
    // }

    //printf ("\n5 = %0x \n", 50);

    // int * teste = malloc(1 * sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     teste[i] = i - 1;
    //     teste = ;
    // }
    // free (teste);

    char teste[] = "-2";
    
}

