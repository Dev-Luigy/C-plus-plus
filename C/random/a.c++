#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class R{
    private:
    int n = 0;
    double *vetor = NULL;
    
    public:
    R(int n){
        this->n = n;
        this->vetor = (double *) realloc(this->vetor, n * sizeof(double));
    }

    void preencherVet(){
        for (int i = 0; i < n; i++) scanf ("%lf", &vetor[i]);
    }
    void addValue(int index, double value){
        vetor[index] = value;
    }
    
    double retornaCordenada(int index){
        return vetor[index];
    }
    

    float innerMult(){
        float value = 0;
        for (int i = 0; i < n; i++){
            value += vetor[i];
        }
        return value;
    }  

    R operator+(R outroR){
        R * resultado = new R(this->n);
        int i = 0;
        while(i < n){
            resultado->addValue(i, vetor[i] + outroR.vetor[i]);
            i++;
        }
        return *resultado;
    }
    
    float operator*(R outroR){
        int i = 0;
        double result = 0;
        while(i < n){
            result += outroR.vetor[i] * vetor[i];
            i++;
        }
        return result;
    }

    double modal(){
        double total = 0;
        for (int i = 0; i < n; i ++){
            total += vetor[i] * vetor[i];
        }
        return sqrt(total);
    }

};

int main(){ 
    int n = 0;

    scanf ("%d", &n);
    R *firstR = new R(n);
    R *secondR = new R(n);

    firstR->preencherVet(), secondR->preencherVet();


    //mult
    double result = *firstR * *secondR;
    printf ("Produto Escalar: %.2f\n", result);

    //power.
    double result2 = firstR->modal();
    double result4 = secondR->modal();
    printf ("Modulos: %.2f e %.2f\n", result2, result4);

    //sum
    R results = *firstR + *secondR;
    printf("Soma: ");
    for (int j = 0; j < n; j++){
        printf ("%.2f ", results.retornaCordenada(j));
    }
    printf ("\n");

    //Degree
    double result3 = (result / (firstR->modal() * secondR->modal())); 
    printf ("Cosseno: %.2f\n", result3);
}