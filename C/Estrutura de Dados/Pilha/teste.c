#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    float valor;
    struct node * proximo;
}Node;

Node * stack (Node * top, float valor)
{
    Node * p = malloc(sizeof(Node));
    p->proximo = top;
    p->valor = valor;
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

float calculadora(float n1,float n2, char op)
{
    switch (op)
    {
    case '+':
        return n1 + n2;
        break;
    case '-':
        return n1 - n2;
        break;
    case '*':
        return n1 * n2;
        break;
    case '/':
        return n1 / n2; 
        break;
    default:
        return 0.0;
        break;
    }
}

float resolver_expressao (char s[])
{
    Node * n1, * n2, * top = NULL;
    char * pt;
    float num = 0;

    pt = strtok(s, " ");
    while (pt)
    {
        if (*pt == '+' || *pt == '-' || *pt == '*' || *pt == '/')
        {
            n1 = unstack(&top);
            n2 = unstack(&top);
            num = calculadora(n2->valor, n1->valor, *pt);
            top = stack(top, num);
            free(n1);
            free(n2);
        }
        else
        {
            top = stack(top, strtol(pt, NULL, 10));
        }
        pt = strtok(NULL, " ");
    }
    n1 = unstack(&top);
    num = n1->valor;
    free(n1);
    return num;
}

int main ()
{
    char texto[50] = "51 13 12 * +";
    float num = resolver_expressao(texto);
    printf ("%.2f", num);
}