#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no
{
    char placa[10];
    float KMPercorrido;
    float LPorMes;
    float Consumo;
    char TipoCombustivel[7];
    struct no * proximo;
} Veiculos;

Veiculos RemoverCarro (Veiculos ** topo)
{
    if(*topo)
    {
        Veiculos * p = *topo;
        *topo = p->proximo;
    }
}

Veiculos * AdicionarVeiculo (Veiculos * topo)
{
    Veiculos *Carros = malloc(sizeof(Veiculos));
    Carros->proximo = topo;
    printf ("Digite a placa do carro: \n");
    fgets(Carros->placa, 10, stdin);   Carros->placa[strlen(Carros->placa) - 1] = '\0'; //retirando o enter da placa.
    printf ("Digite a Quilometragem percorrida: \n");
    scanf ("%f", &Carros->KMPercorrido);
    printf ("Informe a quantidade de Litros abastecidos por mês: \n");
    scanf ("%f", &Carros->LPorMes);
    fgetc(stdin);
    Carros->Consumo = Carros->KMPercorrido / Carros->LPorMes;
    printf ("Qual o tipo de Combustível utilizado? Flex | Diesel\n");
    scanf ("%s", Carros->TipoCombustivel);
    printf ("\n");
    fgetc(stdin);
    return Carros;
}

Veiculos PrintarVeiculos (Veiculos * p)
{
    while (p)
    {
        printf ("%-10s ", p->placa);
        printf ("%-3.1f KM ", p->KMPercorrido);
        printf ("%-4.1f L ", p->LPorMes);
        printf ("%-11.1f", p->Consumo);
        printf ("%-8s\n", p->TipoCombustivel);
        p = p->proximo;
    }
}

int main ()
{
    Veiculos * carro = NULL;
    register int y = 0;
    
    for(int i = 0; i < 10; i++)
    {
        y = 0;
        carro = AdicionarVeiculo(carro);
        printf ("%-10s %-8s %-7s %-10s %-8s\n",
        "Placa:", "KM:", "L:", "Consumo:", "Tipo:");
        PrintarVeiculos(carro);
    }
       
}