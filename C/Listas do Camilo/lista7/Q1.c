#include <stdio.h>
#include <string.h>

//lista e ordem das funções.
int  contavogais(char * texto);
int  tamanho    (char const * texto);
int  compara    (char origem[], char destino[]);
int  palindroma (char s[]);
void TextoNormal(char * texto);
void busca      (char * texto, char * buscado);
void copia      (char origem[], char destino[]);
void concatena  (char origem[], char destino[]);
void inverte    (char origem[], char destino[]);
void cifra      (char * texto, int chave);


//todas as funções abaixo.
int  contavogais(char * texto)
{
    char Vogais[5] = {'a','e','i','o','u'};
    int counter = 0;
    do
    {
        for (int i = 0; i < 5; i++) counter += *texto == Vogais[i] ? 1 : 0;
    } while (*texto++);
    return counter;
}

int tamanho(char const * texto)
{
    int count = 1;
    do
    {
        count ++;
    } while (*texto++);
    return count;
}

int compara(char origem[], char destino[])
{
    while (*origem || *destino)
    {
        if (*origem < *destino) return -1;
        else if (*origem > *destino) return 1;
        else if (*origem == *destino) { *origem++, *destino++; }
    }
}

int palindroma (char s[])
{
    int i = tamanho(s);
    int count = 0;
    for (int y = i; y >= i / 2 + (i % 2 == 1 ? 1 : 0); y--)
    {
        count += s[(y - i) * -1] == s[y - 1] ? 1 : 0;
    }
    return (count - 1 == i / 2);
}

void TextoNormal(char * texto)
{
    register short flag = 0;
    do
    {
        if ((flag == 0 || *(texto - 1) == ' ') && *texto >= 97 && *texto <= 122) { printf ("%c", *texto -= 32); flag = 1; }
        else if (*texto >= 65 && *texto <= 90) printf ("%c", *texto += 32);
        else printf ("%c", *texto);
    } while (*texto++);
}

void busca(char * texto, char * buscado)
{
    register int i = 0;
    short flag = 0;
    do
    {
        i++;
        if (*texto == *buscado && flag == 0) { printf ("%d",i); flag = 1; }
        else if (*texto == *buscado && flag == 1) printf (", %d",i);
    } while (*texto++);
    printf ("\n");
}

void copia(char origem[], char destino[])
{
    while (*origem || *destino)
    {
        *destino = '\0';
        if (*origem) { *destino = *origem++; }
        *destino++;
    }
}

void concatena(char origem[], char destino[])
{
    int i = tamanho(destino) - 1;
    destino[++i] = ' ';
    for (int y = 0; y < tamanho(origem);) 
    {
        destino[++i] = origem[y++];
    }
    //while (i != *destino) printf ("%c", destino[--i]);
}

void inverte(char origem[], char destino[100])
{
    int i = tamanho(origem) - 1;
    while(*destino) 
    {
        *destino++ = origem[i--];
    }
}

void cifra (char * texto, int chave)
{
    while (*texto) 
    {
        if (*texto != ' ' && ((*texto >= 97 && *texto <= 122) || (*texto >= 65 && *texto <= 90 )))
        {
            printf ("%c", (*texto + chave) >= 97 && (*texto + chave) <= 122 ? (*texto + chave) : ((*texto + chave) % 123) + 97 );
        }
        else if (*texto == ' ') printf ("%c", *texto);
        else if (*texto == '\n') break;
        *texto++;
    }
}