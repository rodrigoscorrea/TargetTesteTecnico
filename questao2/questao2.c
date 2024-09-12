#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Questão 2
//Objetivo: Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

int main(int argc, char *argv[]){

    char entrada[100];
    int aparicoes = 0;
    scanf("%[^\n]%*c", entrada);
    
    for(int i = 0; entrada[i]; i++){
        entrada[i] = tolower(entrada[i]);
        if (entrada[i] == 'a') {
            aparicoes++;
        }
    }
    
    if(aparicoes){
        printf("A letra 'a' foi encontrada %d vezes na palavra '%s'\n", aparicoes, entrada);
    } else {
        printf("A letra 'a' nao foi encontrada na palavra '%s'\n", entrada);
    }

    return 0;
}