#include <stdio.h>
#include <math.h>

int main ()
{
	int NQ = 0;
	scanf ("%d", &NQ);
	
	if (NQ == 1)
	{
		//camilo: manter a versão que já está na pasta
		int count = 1;
		while (count <= 250)
		{
			if (count % 2 != 0)
			{
				printf ("%d, ", count);
			}
			count ++;
		}
	}
	if (NQ == 2)
	{
		int count = 249;
		while (count >= 0)
		{
			if (count % 2 == 0)
			{
				printf ("%d, ", count);
			}
			count --;
		}
	}
	if (NQ == 3)
	{
		int count = 1, total = 0;
		while (count <= 200)
		{
			if (count % 3 == 0 && count % 7 != 0)
			{
				total += count;
			}
			count ++;
		}
		printf ("%d", total);
	}
	if (NQ == 4)
	{
		//camilo: manter a versão que já está na pasta
		int Numeros, count = 1, count2 = 1;
		scanf ("%d", &Numeros);
		while (count <= 100)
		{
			while (count2 <= 50)
			{
				if (Numeros == (count*count2) && count != 1 && count != 2 && Numeros % 2 != 0 && count != 3 && count != 5 && count != 7)
				{
					printf ("primo\n");
					return 0;
				}
				else if (Numeros == 1 || Numeros == 2 || Numeros % 2 != 0 || Numeros == 3 || Numeros == 5 || Numeros == 7)
				{
					printf ("primo\n");
					return 0;
				}
				count2 ++;
			}
			count ++;
		}
		printf ("Nao primo\n");
	}
	if (NQ == 5)
	{
		int Numero = 0, contador = 0, total = 0;
		float Media;
		while (Numero >= 0)
		{
			scanf ("%d", &Numero);
			if (Numero < 0)
			{
				break;
			}
			else
			{
				total += Numero;
				contador++;
			}
		}
		printf ("Quantidade = %d ", contador);
		printf ("Soma = %d ", total);
		Media = (float)total / contador;
		printf ("Media = %.1f ", Media);
	}
	if (NQ == 6)
	{
		int Numero = 0, count = 1, total = 1;
		scanf ("%d", &Numero);
		printf ("%d", total);
		while (count < Numero)
		{
			total = total * 2 + 1;
			printf (", %d", total);
			count ++;
		}
		printf (".\n");
	}
	if (NQ == 7)
	{
		//camilo: manter a versão que já está na pasta
		int Numero = 0, count = 1, total = 0, i;
		int notas[] = {200, 100, 50, 20, 10, 5, 2, 1};
		scanf ("%d", &Numero);
		while (total <= Numero)
		{
			for (i = 0; i <= 7; i++)
			{
				if (total + notas[i] <= Numero)
				{
					total += notas[i];
					total != Numero ? printf ("%d, ", notas[i]) : printf ("%d", notas[i]);
					break;
				}
			}
			count ++;
		}
	}
	if (NQ == 8)
	{
		//camilo: manter a versão que já está na pasta
		int N1 = 0, N2 = 0, count = 1000, R = 1;
		scanf ("%d %d", &N1, &N2);
		while (R != 0)
		{
			if (N1 % count == 0 && N2 % count == 0)
			{
				printf ("MDC = %d", count);
				return 0;
			}
			count--;
		}
	}
	if (NQ == 9)
	{
		// precisa incluir a #include <math.h>
		int Numero = 0;
		scanf ("%d", &Numero);
		// verifique se é maior do que zero
		if(Numero <= 0){
			printf("Nao ha multiplicadores");
			return 0;
		}
		// Todo número é divisivel por 1
		printf ("(%d x %d)", 1, Numero);
		
		// repete de 2 até raiz quadrada do numero
		int raizDeN = (int) sqrt(Numero);
		for (int contador = 2; contador <= raizDeN; contador++)
		{
			// o contador é dividor de N?
			if(Numero % contador == 0) {
				// se for imprime a dupla contador e valor da divisão
				printf (", (%d x %d)", contador, Numero/contador);
			}
		}
		printf (".\n");
	}
	if (NQ == 10)
	{
		int Num, i, num1 = 0, num2 = 0, num3 = 0;
		scanf ("%d", &Num);
		num1=0;
		num2=1;
		num3 = num1+num2;
		for (i = 2; i < Num; i ++)
		{
			num1 = num2;
			num2 = num3;
			num3 = num1+num2;
		}
		printf ("Termo = %d", num3);
	}
}
