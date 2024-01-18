#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
	int quanTest = 0;	scanf ("%d", &quanTest);
	
	do{
		int i, y, j = y = i = 0;
		int flag = 0;
		int quantStrings = 0; 	scanf ("%d", &quantStrings);
							  	fgetc(stdin);
		char strings[quantStrings][10];
		
		for (; i < quantStrings; i++) {
			fgets(strings[i], 10, stdin);
			strings[i][strlen(strings[i]) - 1] = '\0';
		}
		
		for (i = 0; i < quantStrings; i++){
			flag = 0;
			int cons = 0;
			for (y = 0 ; y < quantStrings; y++){
				if (y == i) continue;
				for (j = 0 + cons; j < quantStrings; j++){
					if (j == i) continue;
					else if (strlen(strings[y]) + strlen(strings[j]) != strlen(strings[i])) continue;
					else if (strings[i][0] != strings[y][0] && strings[i][0] != strings[j][0]) continue;
					
					char mescl[22];
					char invertmscl[22];
					strcpy(mescl, "");
					strcpy(invertmscl, "");
					strcat(mescl, strings[y]);
					strcat(mescl, strings[j]);
					strcat(invertmscl, strings[j]);
					strcat(invertmscl, strings[y]);
					//printf ("%s == %s tam = %d\n", mescl, strings[i], strlen(strings[y]) + strlen(strings[j]));
					if (!strcmp(mescl, strings[i]) || !strcmp(invertmscl, strings[i])){
						printf ("1");
						flag = 1;
						cons++;
						break;
					}
					if (flag == 1) break;
				}
				if (flag == 1) break;
			}
			if (flag == 0) printf ("0");
		}
		printf ("\n");
	} while (--quanTest);
}
