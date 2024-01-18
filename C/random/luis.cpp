#include <iostream>

using namespace std;

class R{
private:
int n;
double *vetor;
public:
R (int n){
    this->n = n;
    this->vetor = (double*) realloc(this->vetor, n*sizeof(double));
}

void add(int idc, double num){
    vetor[idc] = num;
}

double ret_num(int n){
    return vetor[n];
}

R soma(R R2){
    R resultado(this->n);
    for(int i=0; i<n; i++){
        resultado.add(i, ret_num(i) + R2.ret_num(i));
    }

    return resultado;

}

double prod_esc(R R2){
    double result=0;
    for(int i=0; i<n; i++){
        result += ret_num(i) * R2.ret_num(i);
    }
    return result;
}

R mod(R R2){
    R results(2);
    double n1 =0, n2=0;

    for(int i=0; i<n; i++){
        n1+= ret_num(i) * ret_num(i);
    }
    for(int i=0; i<n; i++){
        n2+= R2.ret_num(i) * R2.ret_num(i);
    }
    results.add(0,n1);
    results.add(1,n2);

    return results;
    
    
}


};



int main(){
    int n;
    cin>> n;
    double valor;
    R *R1= new R(n);
    R *R2 = new R(n);

    for(int i=0; i<n; i++){
        cin>> valor;
        R1->add(i,valor);
    }
    for(int i=0; i<n; i++){
        cin>> valor;
        R2->add(i,valor);
    }

    double result = R1->prod_esc(*R2);
    cout<< "Produto Escalar: " <<  result << endl;
    cout<< "Modulos: ";

    R resultado_mod = R1->mod(*R2);
    for(int i=0; i<2; i++){
        cout<< resultado_mod.ret_num(i) << " ";
    }
    cout<< endl << "Soma: ";

    R resultado_som = R1->soma(*R2);
    for(int i=0; i<n; i++){
        cout<< resultado_som.ret_num(i) << " ";
    }



}