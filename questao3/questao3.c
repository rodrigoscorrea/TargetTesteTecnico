#include <stdio.h>
// Questão 3 
// Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

int main(){

    int indice = 12, soma = 0, k = 1;

    while(k < indice){
        k++;
        soma += k;
    }
    
    printf("%d\n", soma);

    return 0;
}
