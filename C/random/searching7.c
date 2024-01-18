#include <stdio.h>

int main () {
    int num = 7;
    for (int i = 1; i <= 1000; i++){
        int result = num;
        int total = 0;
        while(result){
            total += result%10;
            result/=10;
        }
        if (result>10){
            total = 0;
            while(result){
            total += result%10;
            result/=10;
        }
        }
        printf ("num = %d, total = %d, soma = %d\n", num, total, total + num);
        num+=7;
    }
    return 0;
}