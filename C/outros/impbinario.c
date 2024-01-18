#include <stdio.h>
#include <locale.h>
#include <string.h>

void imprimirBinario(char c);
void imprimirHexa(char c);

// Se estiver no Windows, os valores impressos serao de acordo com essa tabela: https://stringfixer.com/pt/Code_page_850

// Se estiver no Linux, a tabela eh essa: https://en.wikipedia.org/wiki/Latin-1_Supplement

int main(int argc, char **argv)
{
	//comando de regionalização
  setlocale(LC_ALL, "Portuguese_Brazil");

  while(1) { // loop eterno, nao faca isso em casa
    char frase[31];
    
    printf("palavra = ");
    fgets(frase, 31, stdin);
    printf ("%ld\n", strlen(frase));
    frase[30] = 0; // soh para garantir
    
    printf("bin = ");
    for(int i = 0; i < strlen(frase); i++){
      imprimirBinario(frase[i]);
    }
    printf("\n");
    printf("hex = ");
    for(int i = 0; i < strlen(frase); i++){
      printf("%8x ",frase[i]&0xFF);
    }
    printf("\n");
    printf("dec = ");
    for(int i = 0; i < strlen(frase); i++){
      printf("%8d ",frase[i]&0xFF);
    }
    printf("\n");
  }
	return 0;
}

void imprimirBinario(char c){
  printf("%d",(c>>7)&01);
  printf("%d",(c>>6)&01);
  printf("%d",(c>>5)&01);
  printf("%d",(c>>4)&01);
  printf("%d",(c>>3)&01);
  printf("%d",(c>>2)&01);
  printf("%d",(c>>1)&01);
  printf("%d ",c&01);
}