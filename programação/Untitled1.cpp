#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void inverte(char origem[],char destino[],int i){
    int cont=0;
    for(;cont<i||origem[cont]!='\0';++cont){
    	destino[cont]=origem[i-1-cont];
	}
	printf("%s",destino);
}

int main(){
	char caractere,origem[100],destino[100];
	int i=0;
	do{
		++i;
		caractere=getchar();
		origem[i]=caractere;
	}while(caractere!='\n');
    origem[i]='\0';
    inverte(origem,destino,i);
}
