#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include"restaurante.h"


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    cardapio* c = (cardapio*) malloc (sizeof(cardapio));
    restaurante* r = (restaurante *) malloc (sizeof(restaurante));
    iniciar_cardapio(c);
    *r = inicializar_restaurante();
    int aux = 0;
    
    while(1){
        printf  ("Menu: \n");
        printf  ("1 - Criar Pedido.\n");
        printf  ("2 - Mostrar todos os pedidos.\n");
        printf  ("3 - Pedidos por mesa/encerrar mesa.\n");
        printf  ("4 - Adicionar novo sabor\n");
        printf  ("5 - Remover sabor\n");
        printf  ("6 - Sair\n");
        scanf   ("%d", &aux);

        switch (aux){
        case 1:
            //adiciona um pedido para a mesa.
            adicionar_pedido(r, c);
            break;
        case 2:
            //mostra todos os pedidos do restaurante;
            float total;
            total = mostrar_pedidos_mesa(r, 0, 1); // terceiro parametro informa que os 2 anteriores serão irrelevantes, veremos todas as mesas.
            printf ("Valor total em pedidos: %2.2f\n\n", total);
            break;
        case 3:
            printf ("Digite a mesa: \n");
            float valor_pagar;
            int mesa;
            scanf ("%d", &mesa);
            valor_pagar = mostrar_pedidos_mesa(r, mesa, 0);
            printf ("Valor a pagar: %2.2f\n", valor_pagar);
            if (!valor_pagar) break; //se não tiver nenhum pedido, quebra;
            
            int choice;
            printf ("Deseja encerrar a mesa? 1 = Y| 0 = N\n\n");
            scanf ("%d", &choice);
            //se escolheu limpar a mesa, ou seja 1, deveremos limpar os pedidos com a mesa 1.

            if (choice == 1){
                excluir_pedidos_mesa(r, mesa);
                char mesatxt[100] = "Mesas\\";
                char mesanum[10];
                sprintf(mesanum, "%d", mesa);         // convertendo o numero da mesa para char.
                strcat(mesanum, ".txt");              // adicionando .txt no fim do numero da mesa.
                strcat(mesatxt, mesanum);             // juntando o nome do arquivo folder + mesanum.txt
                remove(mesatxt);
            }
            break;
        case 4:
            fgetc(stdin); //capturar o \n do enter do menu;
            sabor sabor1;
            char nome[100]; float valor;
            printf ("Digite o nome do sabor: \n");          scanf("%[^\n]", nome);
            printf ("Digite o valor do novo sabor: \n");    scanf("%f", &valor);
            fgetc(stdin);
            c = fadicionar_sabor(nome, valor);
            break;
        case 5:
        {
            imprimir_cardapio(c);
            int index = 0;
            printf ("\nSelecione a pizza a ser apagada: ");
            scanf ("%d", &index);
            c = fdeletar_sabor(c, index);
            break;
        }
        case 6:
            exit(1);
        }
    }
}