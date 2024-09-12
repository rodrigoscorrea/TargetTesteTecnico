#include <stdio.h>
#include <stdlib.h>

//Questão 1
//Objetivo: Dado a sequência de Fibonacci e informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

int main(int argc, char *argv[]){

    int a, b, auxiliar=0, entrada, parada = 0, fazParte = 0;
    a = 0;
    b = 1;
    
    if(argc < 2){
        printf("Uso correto ./<nomeExecutavel> <numeroEntrada>");
        return -1;
    }
    entrada = atoi(argv[1]);

    while(parada != 1) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        if(auxiliar > entrada && entrada != 0) {
            parada = 1;
        } else if (auxiliar == entrada || entrada == 0){
            parada = 1;
            fazParte = 1;
        }
    }

    if(fazParte == 1){
        printf("O numero %d FAZ parte da sequencia de fibonacci na posicao %d\n", entrada);
    } else {
        printf("O numero %d NAO FAZ parte da sequencia de fibonacci\n", entrada);
    }
    return 0;
}