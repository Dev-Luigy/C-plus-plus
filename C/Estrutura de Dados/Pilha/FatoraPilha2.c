#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node * proximo;
}Node;

Node *Empilhar(Node * topo, int num)
{
    Node * p = malloc (sizeof(Node));
    p->num = num;
    p->proximo = topo;
    return p;
}

Node *Desempilhar(Node ** topo)
{
    if (*topo)
    {
        Node * p = *topo;
        *topo = p->proximo;
        return p;
    }
}

Node Imprimir(Node * topo)
{
    while (topo)
    {
        printf ("%d\n", topo->num);
        topo = topo->proximo;
    }
}

int fatorial (int num)
{
    Node * remover, * ptr = NULL;

    while(num > 1)
    {
        ptr = Empilhar(ptr, num--);
    }

    //Imprimir(ptr);

    while(ptr)
    {
        remover = Desempilhar(&ptr);
        num *= remover->num;
        free (remover);
    }
    return num;
}

int main ()
{
    int num = 0;
    printf ("Digite o numero a ser Fatorado. \n");
    scanf ("%d", &num);
    printf ("Fatoração igual a = %d\n", fatorial(num));
}