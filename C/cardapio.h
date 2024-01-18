#include "sabor.h"
#include <stdio.h>

typedef struct{
    sabor* sabores;
    int quantSabores;
}cardapio;


void adicionar_sabor_cardapio(cardapio* cardapio1, sabor sabor1){
    cardapio1->quantSabores++;
    cardapio1->sabores = (sabor *) realloc (cardapio1->sabores, (sizeof(sabor) * (cardapio1->quantSabores)));
    cardapio1->sabores[cardapio1->quantSabores - 1] = sabor1;
}

void iniciar_cardapio(cardapio* cardapio1){
    FILE* f = fopen("cardapio.txt", "r");
    cardapio1->sabores = 0;
    char nome[100]; float preco = 1;
    char aux[1];
    while(fscanf(f, "%[^-]%c%f\n", nome, aux, &preco)){
        if (!preco) break; 
        sabor* sabor1 = (sabor *) malloc (sizeof(sabor));
        criar_sabor(sabor1, nome, preco);
        adicionar_sabor_cardapio(&*cardapio1, *sabor1);
        preco = 0;
    }
}

void imprimir_cardapio(cardapio* cardapio1){
    int i = 0;
    printf("%-50s","-------------RESTAURANTE TJM-------------");
    printf("%-50s","\n-----------------------------------------");
    printf("%-50s","\n---| COD |      PIZZAS        |  VALOR  |");
    printf("%-50s","\n-----------------------------------------");
    for (; i < cardapio1->quantSabores; i++){
        if (i + 1< 10)  printf ("\n%-6s%d%-3s%-20s%s%2.2f%5s", "---|  ", i + 1, "  |", cardapio1->sabores[i].nome, "|", cardapio1->sabores[i].preco, "    |");
        else            printf ("\n%-5s%d%-3s%-20s%s%2.2f%5s", "---| ", i + 1, "  |", cardapio1->sabores[i].nome, "|", cardapio1->sabores[i].preco, "    |");
    }
    printf("%-50s","\n-----------------------------------------");
}

cardapio* fadicionar_sabor(char* nome, float preco){
    cardapio* cardapioNovo = (cardapio*) malloc (sizeof(cardapio));
    iniciar_cardapio(cardapioNovo);
    sabor sabor1;
    criar_sabor(&sabor1, nome, preco);
    FILE* f = fopen("cardapio.txt", "a");
    fprintf (f, "\n%s-%2.2f", sabor1.nome, sabor1.preco);
    adicionar_sabor_cardapio(cardapioNovo, sabor1);
    fclose(f);
    return cardapioNovo;
}

cardapio* fdeletar_sabor(cardapio* c, int index){
    cardapio* cardapioNovo = (cardapio*) malloc (sizeof(cardapio));     // novo cardapio
    FILE* f = fopen("cardapio.txt", "r");                               // cardapio.txt original.
    FILE* newFILE = fopen("cardapionovo.txt", "a");                     // arquivo temporário.
    char nome[100]; float preco = 1;
    char aux[1];
    while(fscanf(f, "%[^-]%c%f\n", nome, aux, &preco)){
        if (preco == 0) break;
        if (strcmp(nome, c->sabores[index - 1].nome)) {                 //se for diferente do nome buscado.
            fprintf (newFILE, "%s-%2.2f\n", nome, preco);
        }
        preco = 0;
    }
    printf ("-----\n");
    fclose(f);
    fclose(newFILE);
    remove("cardapio.txt");
    FILE* newFILE1 = fopen("cardapionovo.txt", "r");
    FILE* f1 = fopen("cardapio.txt", "w");
    while(fscanf(newFILE1, "%[^-]%c%f\n", nome, aux, &preco)){
        if (preco == 0) break; 
        fprintf (f1, "%s-%2.2f\n", nome, preco);
        preco = 0;
    }
    fclose(newFILE1);
    remove("cardapionovo.txt");
    fclose(f1);
    iniciar_cardapio(cardapioNovo);
    return cardapioNovo;
}