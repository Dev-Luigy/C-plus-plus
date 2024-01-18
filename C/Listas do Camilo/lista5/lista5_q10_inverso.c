int main ()
{
	int quantNumeros = 20;
	int v[quantNumeros], v2[quantNumeros]; //Declaração do vetor e sua quantidade de numeros.
	
	int i = 0;
	for (i = 0; i < quantNumeros; i++)
	{
		scanf ("%d", &v[i]);
		v2[i] = v[i];
	}
	
	int counter = quantNumeros - 1;
	
	for (i = 0; i < quantNumeros; i++)
	{
		v[i] = v2[counter];
		counter --;
		i < quantNumeros - 1 ? printf ("%d ", v[i]) : printf ("%d\n", v[i]);
	}
}
