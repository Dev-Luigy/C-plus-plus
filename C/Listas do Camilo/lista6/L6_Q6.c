#include <stdio.h>

int main ()
{
    float Discentes[11][6];
    // 0 a Matricula, 1 a 4 representam as notas, 5 a média.
    int i2, i = i2 = 0;
    float soma = 0; //junta notas.
    float somaColunas[5]; // 1 Entrada pra cada coluna.
    for (; i < 10; i++)
    {
        scanf ("%f", &Discentes[i][0]); //Entre com a Matrícula.
        for (i2 = 1; i2 < 5; i2++)
        {
            scanf ("%f", &Discentes[i][i2]);
            int inNota = Discentes[i][i2]; // atalho para a nota.
            soma += inNota;
            if ( i2 == 4 ) { Discentes[i][i2+1] = soma / 4; soma = 0; }

            //Aqui será feito a soma das colunas.
            if (i2 >= 1) { somaColunas[i2 - 1] += inNota; }
            // Como minha nota 1 é a coluna 1, a somaColuna 0 representa a coluna 1 de notas, por isso i2 - 1;
        }
    }

      // aqui será feito a conversão em média da turma por nota.
      // esse dado será gravado na linha 10 do array discentes.
    for(i = 1; i < 6; i++)
    {
        Discentes[10][i] = somaColunas[i-1] / 10;
    }

    soma = 0;
    for (i = 0; i < 10; i ++)
    {
        soma += Discentes[i][5];
    } // pega as médias feitas dos 10 alunos.
    Discentes[10][5] = soma / 10; // Média geral Alunos e Notas.

    printf ("    Mat     Nota 1   Nota 2   Nota 3   Nota 4    Média  Situação\n");
    for (i = 0; i < 11; i++)
    {
        for (i2 = 0; i2 < 6; i2++)
        {
            if (i2 == 0) { if (i == 10) { printf ("  Médias:"); } else {printf ("%8.0f ", Discentes[i][i2]);}}
            else { printf ("%8.2f ", Discentes[i][i2]); }
            //printar a situação;
        }
        if (i != 10)
        {
            if (Discentes[i][5] < 4) { printf ("\tReprovado."); }
            else if (Discentes[i][5] >= 4 && Discentes[i][5] < 7) { printf ("\tAvaliação final."); }
            else if (Discentes[i][5] >= 7){ printf ("\tAprovado."); }
        }
        printf ("\n");
    }
/*
Para testes:
542161	7	8	8	7
542162	8	6	7	6
542163	8	9	9	5
542164	9	9	5	5
542165	10	10	10	5
542166	10	8	8	4
542167	8	8	8	8
542168	6	6	7	6
542169	7	7	7	5
542170	7	7	5	5

Copiar e colar.
Resultado deve ser (segundo libre calc "excel do linux.")
  Mat	Nota    Nota 2	Nota3 	Nota 4	Media
542161	7	    8	    8	    7	    7,5
542162	8	    6	    7	    6	    6,75
542163	8	    9	    9	    5  	    7,75
542164	9	    9	    5	    5	    7
542165	10	    10	    10	    5	    8,75
542166	10	    8	    8  	    4	    7,5
542167	8	    8	    8	    8	    8
542168	6	    6	    7	    6	    6,25
542169	7	    7	    7	    5	    6,5
542170	7	    7	    5	    5	    6
Media	8	    7,8	    7,4	    5,6	    7,2


*/

}