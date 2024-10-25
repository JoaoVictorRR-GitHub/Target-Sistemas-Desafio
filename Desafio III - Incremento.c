/**
 *  3) Observe o trecho de código abaixo:
 *      int INDICE = 12, SOMA = 0, K = 1;
 *      enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
 *      imprimir(SOMA);
 *  
 *  Ao final do processamento, qual será o valor da variável SOMA?
 *  RESULTADO: 77.
 */

#include<stdio.h>


/// @brief Main.
int main(){

    int INDICE = 12, SOMA = 0, K = 1;

    // Loop para incrementar a variavel SOMA.
    while(K++ < INDICE){ SOMA += K; }
    printf("| O valor da variavel SOMA eh:  %d", SOMA);
    return 0;
}