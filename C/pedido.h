typedef struct{
    int id;
    int mesa;
    int quantSabores;
    float valor = 0;
    sabor* sabores;
}pedido;


//função pra imprimir o pedido.
void mostrar_pedido(pedido* p){
    printf ("Mesa:  %d\nValor: %2.2f\nSabores: \n", p->mesa, p->valor);
    for (int i = 0; i < p->quantSabores; i ++){
        printf ("%s, valor: %2.2f\n", p->sabores[i].nome, p->sabores[i].preco);
    }
}


//recebe um pedido checando se é a mesa buscada, no fim retorna o total do pedido.
float mostrar_pedido_mesa(pedido* p, int mesa, int type){
    if ((p->mesa == mesa && mesa != 0) || type == 1 && p->valor != 0){
        float total_mesa = 0;
        printf ("Mesa:  %d\nValor: %2.2f\nSabores: \n", p->mesa, p->valor);
        for (int i = 0; i < p->quantSabores; i ++){
            printf ("sabor: %-25s | valor: %2.2f.\n", p->sabores[i].nome, p->sabores[i].preco);
            total_mesa += p->sabores[i].preco;
        }
        printf ("\n");
        return total_mesa; //vai imprimir cada pedido, 
    }else return 0;
}
