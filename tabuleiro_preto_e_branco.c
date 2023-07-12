//Declare uma matriz de inteiros que represente um tabuleiro de xadrez. Inicialize-a com um 0 para as casas brancas e 1 para as casas pretas. Imprima sua matriz de uma forma que pareça um tabuleiro, ou seja, cada jogador vê uma casa branca no canto direito e uma casa preta no canto esquerdo. 

/*
//Inicializando a matriz:

int tabuleiro[TAM][TAM] = {
        {'0', '1', '0', '1', '0', '1', '0', '1'},
        {'1', '0', '1', '0', '1', '0', '1', '0'},
        {'0', '1', '0', '1', '0', '1', '0', '1'},
        {'1', '0', '1', '0', '1', '0', '1', '0'},
        {'0', '1', '0', '1', '0', '1', '0', '1'},
        {'1', '0', '1', '0', '1', '0', '1', '0'},
        {'0', '1', '0', '1', '0', '1', '0', '1'},
        {'1', '0', '1', '0', '1', '0', '1', '0'},
    };
*/

//Em vez de iniciar a matriz acima com chaves, declare-a sem iniciar, e depois crie um código que a preencha com zeros e uns.

#include <stdio.h>
#define TAM 8

int main() {
    int tabuleiro[TAM][TAM], i, j;

    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            if ((i + j) % 2 == 0){
                tabuleiro[i][j] = 0;
              
            }else{
                tabuleiro[i][j] = 1;
            }
        }
    }

    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
