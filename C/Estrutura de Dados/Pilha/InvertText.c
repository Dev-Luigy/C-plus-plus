#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char string[20];
    struct node * proximo;
}Node;

Node * stack (Node * top, char * text)
{
    Node * p = malloc(sizeof(Node));
    p->proximo = top;
    strcpy(p->string, text);
    return p;
}

Node unstack (Node ** top)
{
    if (*top)
    {
        Node * p = *top;
        *top = p->proximo;
    }
}

Node print (Node * top)
{
    char * text = NULL;
    int i = 0;
    while (top)
    {
        text = top->string;
        i = strlen(top->string) - 1;
        do
        {
            printf ("%c", text[i]);
        } while (i--);
        printf (" ");
        top = top->proximo;
    }
    printf ("\n");
}

int main ()
{
    Node * top = NULL; 
    char text[20];

    for (int i = 0; i < 5; i++)
    {
        scanf ("%s", text);
        top = stack(top, text);
    }
    print(top);
}