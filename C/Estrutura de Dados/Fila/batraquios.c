#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    struct node * next;
    int num;
} Node;

void insertNode (Node ** top, int num)
{
    Node *aux , * p = malloc(sizeof(Node));
    p->next = NULL;
    p->num = num;
    if (!*top) *top = p;
    else
    {
        aux = *top;
        while (aux->next) aux = aux->next;
        aux->next = p;
    }
}

void removeNode (Node ** top)
{
    if (*top)
    {
        Node * p = *top;
        *top = p->next;
    }
}

int main ()
{
    Node * top = NULL;
    int quantNum = 0; scanf ("%d", &quantNum);
    int numintro = 0;
    do
    {
        scanf ("%d", &numintro);
        insertNode(&top, numintro);
    } while (--quantNum);
    scanf ("%d", &quantNum);
    do
    {
        scanf ("%d", &numintro);
        if (numintro == top->num) removeNode(&top);
    } while (--quantNum);
    if (!top) printf ("sim\n");
    else printf ("nao\n");
    
    
}

/*


Motivação
Todo batráquio é anfíbio, mas nem todo anfíbio é batráquio. Todo sapo, rã e perereca são tanto anfíbios como batráquios.

Assim, o conjunto dos sapos está contido no de batráquios que está contido no de anfíbio.

Não entendeu? Quem mandou gazear a aula de biologia. -_-

[DS]

Ação
Dados dois vetores, verifique se o primeiro está contido no segundo.

Entrada
1a linha: Número de elementos do primeiro vetor(1 a 50) seguido dos elementos.
2a linha: Número de elementos do segundo vetor(1 a 50) seguido dos elementos.
Saída
“sim” se o primeiro está condido no segundo e não caso contrário.

Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.

Exemplos
>>>>>>>>
2 1 3
3 1 5 3
========
sim
<<<<<<<<

>>>>>>>>
2 1 3
3 6 5 3
========
nao
<<<<<<<<

>>>>>>>>
3 1 3 2
6 1 5 3 6 8 2
========
sim
<<<<<<<<


*/