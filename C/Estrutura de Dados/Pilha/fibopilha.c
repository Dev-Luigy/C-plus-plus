#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node * next;
    long long int num;
} Node;

void insertNode (Node ** top, int num)
{
    Node * aux, * p = malloc(sizeof(Node));
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

void deleteNode (Node **top)
{
    Node * p = *top;
    *top = p->next;
}

void fibcalc(int num)
{
    Node * removed, * top = NULL;
    int total = 1, oldtotal = 1;
    do
    {
        insertNode(&top, oldtotal);
        oldtotal = total;
        total += top->num;
        deleteNode(&top);
    } while (--num);
    printf ("%d", total);
}

int main ()
{
    fibcalc(50);
}