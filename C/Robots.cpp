#include <stdio.h>
#include <string.h>

int main(){
    int quanTest = 0;   scanf ("%d", &quanTest);
    do{
        int map[2];     scanf ("%d%d", &map[0], &map[1]);
                        fgetc(stdin);

        char robots[map[0]][map[1]];

        for (int i = 0; i <= map[0]; i++){
            fgets(robots[i], map[1], stdin);
        }

        for (int i = 0; i < map[0]; i++){
            int flag = 0;
            for (int y = 0; y < map[1]; y++){
                if      (robots[i][0] == 'E' || robots[i][map[1]] == 'E')   { flag++; break;}
                else if (robots[0][y] == 'E' || robots[map[0]][y] == 'E')   { flag++; break;}
                if (flag == map[0] * 2) break;
            }
            printf ("%d e %d\n", flag, map[0] * 2);
        }


    }while(--quanTest);
}




/*
    0 0 || 0 2




*/