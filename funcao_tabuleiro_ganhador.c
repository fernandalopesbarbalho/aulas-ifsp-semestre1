//Faça uma função que receba como parâmetro uma matriz como a do ex. 2, porém em qualquer posição do tabuleiro, e calcule a diferença material entre as brancas e as pretas, contando os seguintes valores para cada peça: dama=9, torre=5, bispo=3, cavalo=2,5, peão=1. 

//Se a diferença material for negativa, significa que as peças brancas (letras minúsculas) têm uma vantagem material sobre as peças pretas. Se for positiva, indica que as peças pretas (letras maiúsculas) têm uma vantagem material sobre as brancas. Se for zero, indica que as pontuações são iguais para ambos os lados.

#include <stdio.h>
#define TAM 8

double diferencaMaterial(char tabuleiro[TAM][TAM]){
  int i, j;
  double diferenca = 0;
  
  for (i = 0; i < TAM; i++){
    for (j = 0; j < TAM; j++){
      
      switch (tabuleiro[i][j]) {
                case 'D':
                    diferenca += 9;
                    break;
                case 'T':
                    diferenca += 5;
                    break;
                case 'B':
                    diferenca += 3;
                    break;
                case 'C':
                    diferenca += 2.5;
                    break;
                case 'P':
                    diferenca += 1;
                    break;
                case 'd':
                    diferenca -= 9;
                    break;
                case 't':
                    diferenca -= 5;
                    break;
                case 'b':
                    diferenca -= 3;
                    break;
                case 'c':
                    diferenca -= 2.5;
                    break;
                case 'p':
                    diferenca -= 1;
                    break;
                default:
                    break;
      }
    }
  }         
  return diferenca;
}

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
  printf("Diferenca Material é de: %g\n", diferencaMaterial(tabuleiro));
}