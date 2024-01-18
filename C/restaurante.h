#include "cardapio.h"
#include "pedido.h"
#include <stdio.h>

typedef struct {
    int quantPedidos = 0;
    int quantMesasAtivas = 0;
    int mesasAtivas[100];
    pedido* pedidos;
    cardapio cardapio;
}restaurante;

// inicializa o ponteiro do array de pedidos com 0. (se não inicializar o ponteiro dá erro.)
restaurante inicializar_restaurante(){
    restaurante r;
    int k = 0;
    for (; k < 100; k++) r.mesasAtivas[k] = 0;
    r.pedidos = 0;
    r.quantMesasAtivas = 0;
    FILE* mesasAtivas =         fopen("Mesas\\MesasAtivas.txt", "r");
    FILE* qntmesasAtivas =      fopen("Mesas\\quantMesasAtivas.txt", "r");
    fscanf (qntmesasAtivas, "%d", &r.quantMesasAtivas);
    fclose(qntmesasAtivas);
    FILE* quantPedidosAtivos =  fopen("Mesas\\quantPedidosAtivos.txt", "r");
    fscanf (quantPedidosAtivos, "%d", &r.quantPedidos);
    fclose(quantPedidosAtivos);
    if (!r.quantMesasAtivas) return r;
    r.pedidos = (pedido *) realloc (r.pedidos, sizeof(pedido) * r.quantPedidos);
    int mesa = 0; char aux1[2];
    while(fscanf(mesasAtivas, "%d", &mesa)){
        fscanf(mesasAtivas, "%c", aux1);
        if (mesa == 0) break;
        char nome[100], mesanum[15], aux[1]; float preco;
        r.mesasAtivas[mesa] = 1;
        pedido pedido1;
        pedido1.sabores = 0;
        sprintf(mesanum, "%d", mesa);
        strcat(mesanum, ".txt");
        char finalstring[30];
        strcpy(finalstring, "Mesas\\");
        FILE *buscarquantsabores = fopen(strcat(finalstring, mesanum), "r");
        int y = 0;
        pedido1.mesa = mesa;
        while (fscanf (buscarquantsabores, "%c", aux)){
            if (*aux == *":") y++;
            if (y == 1) {
                fscanf (buscarquantsabores, "%f", &pedido1.valor);
                y++;
            }
            if (y == 3) break;
        }
        fscanf (buscarquantsabores, "%d", &pedido1.quantSabores);
        fclose(buscarquantsabores);
        pedido1.sabores = (sabor *) realloc (pedido1.sabores, pedido1.quantSabores * sizeof(sabor));
        FILE* mesaAtual = fopen(finalstring, "r");
        int i = 0;
        while (fscanf(mesaAtual, " %[^-] %c%f", nome, aux, &preco)){
            if (preco == 0) break;
            if (*nome == *";")break; 
            sabor sabor1;
            strcpy(sabor1.nome, nome);
            sabor1.preco = preco;
            pedido1.sabores[i++] = sabor1;
            preco = 0;
        }
        mesa = 0;
        fclose(mesaAtual);
    }
    fclose(mesasAtivas);
    return r;
}

//recebe o cardapio e o restaurante, e cria o pedido com a mesa solicitada na função. no fim retorna o pedido preenchido.
pedido criar_pedido(cardapio* c, restaurante* r){
    FILE *f;
    FILE *mesaAtiva;
    pedido pedido1;
    r->quantPedidos++;
    pedido1.sabores = 0;
    printf ("Qual a mesa?\n");
    scanf ("%d", &pedido1.mesa);
    if (!r->mesasAtivas[pedido1.mesa]){
        r->mesasAtivas[pedido1.mesa] = 1;
        r->quantMesasAtivas++;
        remove("Mesas\\quantMesasAtivas.txt");
        FILE *tmp = fopen("Mesas\\quantMesasAtivas.txt", "w");
        fprintf (tmp, "%d", r->quantMesasAtivas);
        mesaAtiva = fopen("Mesas\\MesasAtivas.txt", "a");
        fprintf (mesaAtiva, "%d;", pedido1.mesa);
        fclose(mesaAtiva);
    }
    

    //gerenciamento de arquivos
    char mesatxt[100] = "Mesas\\";
    char mesanum[10];
    sprintf(mesanum, "%d", pedido1.mesa); // convertendo o numero da mesa para char.
    strcat(mesanum, ".txt");              // adicionando .txt no fim do numero da mesa.
    strcat(mesatxt, mesanum);             // juntando o nome do arquivo folder + mesanum.txt
    f = fopen(mesatxt, "a");

    printf ("Quantas pizzas deseja?\n");
    scanf  ("%d", &pedido1.quantSabores);
    //alocando espaço para um pedido com a quantidade de sabores solicitada.
    pedido1.sabores = (sabor *) realloc (pedido1.sabores, pedido1.quantSabores * sizeof(sabor));
    for (int i = 0; i < pedido1.quantSabores; i++){
        system("cls");
        imprimir_cardapio(c);
        printf ("\n");
        int selecionado = 0;
        scanf("%d", &selecionado);
        sabor sabor1 = c->sabores[selecionado-1];
        pedido1.sabores[i] = sabor1;        //para cada sabor adiciona o sabor ao array de sabores do pedido.
        pedido1.valor += sabor1.preco;      //o valor total do pedido recebe o valor do sabor atual.
        pedido1.id = r->quantPedidos + 1;     //adicionando o id do pedido. 
        FILE *quantPedidosAtivos = fopen("Mesas\\quantPedidosAtivos.txt", "w");
        fprintf (quantPedidosAtivos, "%d", r->quantPedidos);
        fclose(quantPedidosAtivos);
        fprintf (f, "%s-%2.2f", sabor1.nome, sabor1.preco);
    }
    fprintf (f, ";");
    fprintf(f, "%d:%2.2f:%d;\n", pedido1.id, pedido1.valor, pedido1.quantSabores);
    fclose(f);
    return pedido1;
}


//cria um pedido no restaurante passado usando o cardapio inserido, allocando um espaço de pedido e adicionando o pedido.
void adicionar_pedido(restaurante* r, cardapio* c){
    r->quantPedidos++;
    r->pedidos = (pedido *) realloc (r->pedidos , (sizeof(pedido) * r->quantPedidos));
    r->pedidos[r->quantPedidos-1] = criar_pedido(c, r);
}


//printa todos os pedidos.
void mostrar_pedidos(restaurante* r){
    for (int i = 0; i < r->quantPedidos; i++){
        if (!r->mesasAtivas[r->pedidos[i].mesa]) continue; //verificando se a mesa é existente.
        mostrar_pedido(&r->pedidos[i]);
        printf ("\n");
    }
}

// Verifica todos os pedidos do restaurante, e faz a soma geral de acordo se a mesa tá certa.
float mostrar_pedidos_mesa(restaurante* r,int mesa, int type){
    float total = 0;
    for (int i = 0; i < r->quantPedidos; i++){
        total += mostrar_pedido_mesa(&r->pedidos[i], mesa, type);
    }
    return total;
}


//verifica todos os pedidos no restaurante, e se o pedido for daquela mesa, apaga o pedido.
void excluir_pedidos_mesa(restaurante* r, int mesa){
    pedido vazio;
    for (int i = 0; i < r->quantPedidos; i++){
        if (r->pedidos[i].mesa == mesa){
            r->pedidos[i] = vazio; 
            r->quantPedidos--;
            FILE *quantPedidosAtivos = fopen("Mesas\\quantPedidosAtivos.txt", "w");
            fprintf (quantPedidosAtivos, "%d", r->quantPedidos);
            fclose(quantPedidosAtivos);
        }

    }
    r->mesasAtivas[mesa] = 0;
}