#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int a;
    struct node * proximo;
} Node ;

Node * Empilhar (Node * topo, int num)
{
    Node * p = malloc (sizeof(Node) * 1);
    p->a = num;
    p->proximo = topo;
    printf ("\n");
    return p;
}

Node * desempilhar (Node ** topo)
{
    if (topo)
    {
        Node * p = *topo;
        *topo = p->proximo;
        return p;
    }
    printf ("\n");
    return NULL;
}

Node Imprimir (Node * topo)
{
    while (topo)
    {
        printf ("%d\n", topo->a);
        topo = topo->proximo;
    }
    printf ("\n");
}

int fatorial (int num)
{
    Node *remover, * p = NULL;

    while (num > 1)
    {
        p = Empilhar(p, num--);
    }

    //Imprimir(p);

    while (p)
    {
        remover = desempilhar(&p);
        num *= remover->a;
        free(remover);
    }
    return num;
}

int main ()
{
    printf("%d", fatorial(3));
}