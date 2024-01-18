#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char caracter;
    struct node * proximo;
}Node;

Node * stack (Node * top, char text)
{
    Node * p = malloc(sizeof(Node));
    p->proximo = top;
    p->caracter = text;
    return p;
}

Node * unstack (Node ** top)
{
    if (*top)
    {
        Node * p = *top;
        *top = p->proximo;
        return p;
    }
}

Node print (Node * top)
{
    while (top)
    {
        printf ("%c", top->caracter);
        top = top->proximo;
    }
    printf ("\n");
}

void InverterPalavra(char * text)
{
    Node * remove, * top = NULL;
    do
    {
        if (*text != ' ') { top = stack(top, *text); }
        else 
        {
            while(top)
            {
                remove = unstack(&top);
                printf ("%c", remove->caracter);
                free (remove);
            }
            printf (" ");
        }
    } while (*++text);
    while(top)
    {
        remove = unstack(&top);
        printf ("%c", remove->caracter);
        free (remove);
    }
    printf ("\n");
}

int main ()
{
    Node * top = NULL; 
    char text[25] = "ABRA A PORTA MARIQUINHA";
    InverterPalavra(text);
}