//Recebe uma sequência de 5 números e imprime a quantidade deles que são pares

#include <stdio.h>

#define TAMANHO 5

int main(void) {
  int vetor[TAMANHO], i, num_pares = 0;

  //receber os dados
  for (i = 0; i < TAMANHO; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);

    if (i%2 == 0){
      num_pares += 1;
    }
  }

  //mostrar os dados
    printf("%d sao pares", num_pares);

}