#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int a;
    struct node * proximo;
} Node;

Node * empilhar(Node * topo)
{
    Node * p = malloc (1 * sizeof(Node));
    printf ("Digite o numero a ser empilhado: \n");
    scanf ("%d", &p->a);
    p->proximo = topo;
    printf ("\n");
    return p;
}

Node desempilhar (Node ** topo)
{
    if (*topo)
    {
        Node *p = *topo;
        *topo = p->proximo;
    }
}

Node imprimir (Node * topo)
{
    while (topo)
    {
        printf ("%d\n", topo->a);
        topo = topo->proximo;
    }
}

int main ()
{
    Node * topo = NULL;
    short int choice = 100;

    do
    {
        printf ("Menu: \n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n\n0 - Sair\n\n");
        scanf ("%hd", &choice);
        printf ("\n"); 
        switch (choice)
        {
        case 1:
            topo = empilhar(topo);
            break;
        case 2:
            desempilhar(&topo);
            break;
        case 3:
            imprimir(topo);
            break;
        default:
            break;
        }
    } while (choice);
    
}