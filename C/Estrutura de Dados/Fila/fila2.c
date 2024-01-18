#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node * next;
}Node;

typedef struct queue
{
    Node * start;
    Node * end;
} Queue;

void queue_create(Queue * kiu)
{
    kiu->end = NULL;
    kiu->start = NULL;
}

void insertNode (Queue * kiu, int num)
{
    Node * p = malloc (sizeof(Node));
    p->num = num;
    if (!kiu->start)
    {
        kiu->start = p;
        kiu->end = p;
        
    }
    else
    {
        kiu->end->next = p;
        kiu->end = p;
    }
}

void removeNode (Queue * kiu)
{
    Node * remove = kiu->start;
    kiu->start = remove->next;
}

void printQueue (Queue * kiu)
{
    Node * aux = kiu->start;
    while (aux)
    {
        printf ("%d ", aux->num);
        aux = aux->next;
    }
}

int main ()
{
    Queue kiu;
    queue_create(&kiu);
    short int opcao = 1;
    int num = 0;

    do
    {
        printf ("1 - Inserir\n2 - Remover\n3 - Imprimir\n\n0 - Sair\n\n");
        scanf ("%hd", &opcao);

        switch (opcao)
        {
        case 1:
            printf ("Digite o numero: \n"); scanf ("%d", &num);
            insertNode(&kiu, num);
            break;
        case 2:
            removeNode(&kiu);
            printf ("\n");
        case 3:
            printQueue(&kiu);
            printf ("\n");
            break;
        default:
            break;
        }
    }while(opcao);
}