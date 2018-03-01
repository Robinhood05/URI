#include <stdio.h>
#include <stdlib.h>

// PROGRAMA PRINCIPAL
int main(int argc, char** argv) {

    int i;       //variavel de controle
    int n = 100; //variável de tamanho
    float vf[n];  // vetor com os dados

    //preenchendo o vetor de dados vf
    for(i=0; i < n; i++)
    {
        // atualiza a posição do vetor de índice i
        vf[i] = i/100;  // i é dividido por 100
    }

    return 0;
}
