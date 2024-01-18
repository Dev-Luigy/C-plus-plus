#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node * next;
} Node ;

Node * insert (Node * top, int num )
{
    Node * p = malloc(sizeof(Node));
    p->next = top;
    p->num = num;
    return p;
}

Node * removes (Node ** top)
{
    Node * remove = *top;
    *top = remove->next;
    return remove;
}

void print (Node * top)
{
    int count = 0;
    while (top)
    {
        printf ("%d, ", top->num);
        if (top->num > 0) count++; 
        top = top->next;
    }
    if (count == 0) printf ("0\n");
}

int main ()
{
    Node * removed, * top = NULL;
    int quantNum = 0; scanf ("%d", &quantNum);
    int numintro = 0;
    int total = 0;
    do
    {
        scanf ("%d", &numintro);
        if (numintro == 0) { removed = removes(&top); }
        else top = insert(top, numintro);
    } while (--quantNum);
    while (top)
    {
        removed = removes(&top);
        total += removed->num;
        free(removed);
    }
    printf ("%d\n", total);
}