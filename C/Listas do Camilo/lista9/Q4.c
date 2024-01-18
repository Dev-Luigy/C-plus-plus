#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char placa[10];
    float KMPercorrido;
    float LPorMes;
    float Consumo;
    char TipoCombustivel[7];
} Veiculos;

Veiculos * RealocarArray (Veiculos * Array, int tamanhoAtual)
{
    Veiculos * ArrayNovo = (Veiculos *) malloc ((tamanhoAtual + 1) * sizeof(Veiculos));
    while (tamanhoAtual--)
    {
        *(ArrayNovo + tamanhoAtual) = *(Array + tamanhoAtual);
    }
    return ArrayNovo;
}

Veiculos AdicionarVeiculo (Veiculos * Carros)
{
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
}

Veiculos PrintarVeiculos (Veiculos * p)
{
    printf ("%-10s ", p->placa);
    printf ("%-3.1f KM ", p->KMPercorrido);
    printf ("%-4.1f L ", p->LPorMes);
    printf ("%-11.1f", p->Consumo);
    printf ("%-8s\n", p->TipoCombustivel);
}

int main ()
{
    Veiculos * Carros = (Veiculos *) malloc (1 * sizeof(Veiculos));
    register int quantCarros = 1;
    register int y = 0;
    
    for(int i = 0; i < 10; i++)
    {
        y = 0;
        AdicionarVeiculo(&*(Carros + i));
        printf ("%-10s %-8s %-7s %-10s %-8s\n",
        "Placa:", "KM:", "L:", "Consumo:", "Tipo:");
        while (y <= i)
        {
            PrintarVeiculos(&*(Carros + y++));
        }
        Carros = RealocarArray(Carros, quantCarros++); // adicionando mais um espaço ao array carros
    }
       
}