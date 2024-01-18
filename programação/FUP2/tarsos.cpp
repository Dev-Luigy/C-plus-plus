#include <iostream>

using namespace std;

int* aloc(int n) {
    int *v = (int*)malloc(n*sizeof(int));
    return v;
}

void preencher(int *v) {
    cin >> *v;
}

void print(int *v, int n) {
    for(int i = 0; i < n; i ++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int* rep(int *v, int n) {
    int cont = 0;
    int maior = 0;
    int num = 0;
    int * vec = aloc(n);
    for(int i = 0; i < n - 1; i++) {
        vec[i] = 0;
        if(v[i] == v[i+1]) {
            cont ++;
        }
        else {
            if(maior < cont) {
                maior = cont;
                num = v[i];
            }
            else if(maior == cont) {
                vec[i] = num;
                vec[i+1] = v[i];
            }
        }
    } 
    print(vec, n);
    return vec;
    free(vec);
}

int main() {
    int n = 0;

    cin >> n;

    int *tazo = aloc(n);

    for(int i = 0; i < n; i++) {
        preencher(&tazo[i]);
    }
    
    rep(tazo, n);

    free(tazo);
}