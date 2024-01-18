#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    float preco;
}sabor;


void criar_sabor(sabor* sabor1, char* nome, float preco){
    strcpy(sabor1->nome, nome);
    sabor1->preco = preco;
}