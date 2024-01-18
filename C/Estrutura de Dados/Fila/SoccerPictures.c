#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    struct node * next;
    int value;
} Node;

typedef struct
{
    Node * start;
    Node * end;
} Queue;

void startQueue (Queue * queue)
{
    queue->end = NULL;
    queue->start = NULL;
}

void insertNode (Queue * queue, int value)
{
    Node * p = malloc(sizeof(Node));
    p->value = value;
    if (!queue) { queue->start = p; queue->end = p; }
    else
    {
        queue->end->next = p;
        queue->end = p;
    }
}

Node * removes (Queue * queue)
{
    if (queue->start)
    {
        Node * remove = queue->start;
        queue->start = remove->next;
        return remove;
    }
}

int main ()
{
    Queue queue;
    startQueue(&queue);
    int num, quantNum, 
}