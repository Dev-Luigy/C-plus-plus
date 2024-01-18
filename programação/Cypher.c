#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int quanTest = 0;	scanf ("%d", &quanTest);
	do{
		int i, y, j = y = i = 0;
		int height = 0;		scanf ("%d", &height);
							fgetc (stdin);
		
		height *= 2;
		char num[height];	scanf ("%[^\n]", num);
			
		for (i = 0; i < strlen(num); i++){
			
			if(num[i] == ' ') continue;
			int modify = 0;	scanf ("%d", &modify);
							fgetc(stdin); 
							
			char enter[1];
			for (j = 0; j < modify; j++){
				scanf ("%c", enter);
				num[i] = enter[0] == 'D' ? num[i] + 1 : num[i] - 1;
				num[i] = num[i]   <  '0' ? '9'		  : num[i]    ;
				num[i] = num[i]   >  '9' ? '0'		  : num[i]    ;
			}
			printf ("%c ", num[i]);
		}
		printf ("\n");
	}while (--quanTest);
}
