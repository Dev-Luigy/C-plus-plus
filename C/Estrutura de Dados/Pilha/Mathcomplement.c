#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char caracter;
    struct node * proximo;
} Node ;

Node * stack (Node * top, char a)
{
    Node * p = malloc(sizeof(Node));
    p->caracter = a;
    p->proximo = top;
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

Node print (Node * p)
{
    while (p)
    {
        printf ("%c\n", p->caracter);
        p = p->proximo;
    }
}

int VerifyPairs(char * f, char * o)
{
    switch (*f)
    {
    case ')':
        if (*o == '(')   return 1;
        else            return 0; 
        break;
    case '}':
        if (*o == '{')   return 1;
        else            return 0; 
        break;
    case ']':
        if (*o == '[')   return 1;
        else            return 0; 
        break;
    
    default:
        break;
    }
}

int verificaString (char * string)
{
    Node * remove, * top = NULL;
    do
    {
        if      (*string == '(' || *string == '[' || *string == '{') top = stack(top, *string);
        else if (*string == ')' || *string == ']' || *string == '}') 
        {
            remove = unstack(&top);
            if (VerifyPairs(string, &remove->caracter) == 0) { print(top); return 0; }
            free(remove);
        }
    } while (*++string);
    if (top) { print(top); return 0; }
    else return 1;
}

int main ()
{
    char * calculo = "3 * [(5 - 2] / 5)";
    printf ("%d", verificaString(calculo));
}