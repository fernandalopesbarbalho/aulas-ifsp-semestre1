//Declare uma matriz de caracteres que represente um tabuleiro de xadrez. Casas vazias contém espaços. Casas ocupadas contém a inicial da peça que ocupa a casa, a saber: R=rei, D=dama, T=torre, B=bispo, C=cavalo e P=peão. Use letras minúsculas para as peças brancas e letras maiúsculas para as peças pretas. Inicie a matriz com a posição inicial das peças. Imprima sua matriz.

#include <stdio.h>
#define TAM 8

int main(void) {
  int i, j;
  char tabuleiro[TAM][TAM] = {
        {'T', 'C', 'B', 'R', 'D', 'B', 'C', 'T'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'t', 'c', 'b', 'r', 'd', 'b', 'c', 't'}
    };

  for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}