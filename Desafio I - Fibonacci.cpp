/**
 *  1) Dado a sequencia de Fibonacci, onde se inicia por 0 e 1 e o proximo valor sempre sera a soma dos 2 valores anteriores
 *  (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um numero,
 *  ele calcule a sequencia de Fibonacci e retorne uma mensagem avisando se o numero informado pertence ou nao a sequencia.
 *
 *  IMPORTANTE: Esse numero pode ser informado atraves de qualquer entrada de sua preferencia ou pode ser previamente definido no codigo.
 */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define lli long long int
#define MAX 7540113804746346429     // Valor maximo (considerando lli max) para a sequencia de Fibonacci.
vector<lli> seqFibonacci = {0, 1};  // Vetor para armazenar a sequencia de Fibonacci.



/// @brief Funcao recursiva para gerar a sequencia de Fibonacci.
/// @param indiceSeq Indice do ultimo numero da sequencia.
void gerar_Sequencia_Fibonacci(lli indiceSeq){

    // Verificando se o ultimo numero esta fora do limite estipulado para a sequencia.
    if(seqFibonacci[indiceSeq] >= MAX) return;
    else{
        // Gerando a sequencia.
        seqFibonacci.push_back(seqFibonacci[indiceSeq] + seqFibonacci[indiceSeq -1]);
        gerar_Sequencia_Fibonacci(indiceSeq +1);
    }
}


/// @brief Funcao para verificar se um numero pertence a sequencia de Fibonacci.
void verificar_Numero_Fibonacci(){

    lli Numero;
    string strNumero;

    cout << "\n| ENCONTRAR NUMEROS NA SEQUENCIA DE FIBONACCI" << endl;
    cout << "=========================================================" << endl;
    do{
        try {
            cout << "| Insira um numero para ser verificado:    ";
            cin >> strNumero;
            Numero = stoll(strNumero);  // Conversao da string para numero.
            break;
        }
        catch(const exception& Excpt) {
            cerr << "| Digite apenas numeros!" << endl;
        }
    }while(true);
    cout << "=========================================================" << endl;

    // Encontrando o numero no vetor que contem a sequencia de Fibonacci.
    auto Elemento = find(seqFibonacci.begin(), seqFibonacci.end(), Numero);

    // Verificando se o numero foi encontrado.
    if(Elemento !=  seqFibonacci.end()) cout << "| O numero " << Numero << " pertence a sequencia de Fibonacci!\n" << endl;
    else cout << "| O numero " << Numero << " NAO foi encontrado na sequencia de Fibonacci!\n" << endl;
}


/// @brief Main.
int main(){
    gerar_Sequencia_Fibonacci(1);
    verificar_Numero_Fibonacci();
    return 0;
}