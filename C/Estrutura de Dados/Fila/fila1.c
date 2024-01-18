#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int valor;
    struct node * next;
} Node;

void insert_queue (Node ** queue, int num)
{
    Node * aux, * p = malloc (sizeof(Node));
    p->next = NULL;
    p->valor = num;
    if (!*queue) *queue = p;
    else
    {
        aux = * queue;
        while (aux->next) aux = aux->next;
        aux->next = p;
    }
    printf ("\n");
}

void remove_queue (Node ** queue)
{
    Node * remove = NULL;

    if (*queue)
    {
        remove = *queue;
        *queue = remove->next;
    }
    printf ("\n");
}

void print (Node * queue)
{
    while(queue)
    {
        printf ("%d, ", queue->valor);
        queue = queue->next;
    }
    printf ("\n");
}

int main ()
{
    Node * queue = NULL;
    short opcao = 1;
    int num = 0;
    do
    {
        printf ("1 - Inserir\n2 - Remover\n3 - Imprimir\n\n0 - Sair\n\n");
        scanf ("%hd", &opcao);

        switch (opcao)
        {
        case 1:
            printf ("Digite o numero: \n"); scanf ("%d", &num);
            insert_queue(&queue, num);
            break;
        case 2:
            remove_queue(&queue);
            printf ("\n");
        case 3:
            print       (queue);
            printf ("\n");
            break;
        default:
            break;
        }
    }while(opcao);
}