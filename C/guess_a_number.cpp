#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

void valor_frases(vector<string> parts,float* lower,float* max){
    int aux = 0;
    string possibilities[4] = {">=", "<", "<=", ">"};

    int symbol;
    if (parts[0] == ">="){
        symbol = 0;
        if (parts[2] == "N") symbol = 1;
    }
    else if (parts[0] == "<"){
         symbol = 1;
         if (parts[2] == "N") symbol = 0;
    }
    else if (parts[0] == "<="){
         symbol = 2;
         if (parts[2] == "N") symbol = 3;
    }
    else {
        symbol = 3;
        if (parts[2] == "N") symbol = 2;
    }
    float valor = stoi(parts[1]);
    if (symbol % 2 == 0){ 
        *lower = *lower > valor + (symbol == 3) ? *lower : valor + (symbol == 3);
    } else {
        *max = *max < valor - (symbol == 1) ? *max : valor - (symbol == 1);
    }

}


int main(){
    int n = 0;
    float lower = -1000000000;
    float max = 1000000000;
    scanf("%d",&n);
    vector<string> parts[n];
    for (int i = 0; i < n;i++){
        string aux;
        cin >> aux;
        parts[i].push_back(aux);
        cin >> aux;
        parts[i].push_back(aux);
        cin >> aux;
        parts[i].push_back(aux);
    }
    for (int i = 0;i < n;i++){
        valor_frases(parts[i],&lower,&max);
        printf("%.1f %.1f\n",lower,max);
    }
    // if (max < lower) {
    //     printf("impossible");
    //     exit(0);
    // };
}