//Recebe uma sequência de 10 números, imprime sua posição no vetor e seu valor, depois inprime novamente, porém substituindo os valores menores que zero por zero.

#include <stdio.h>

#define TAMANHO 10

int main(void) {
  int vetor[TAMANHO], i;

  for (i = 0; i < TAMANHO; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < TAMANHO; i++){
    printf("\nVetor[%d] : [%d] ", i, vetor[i]);
  }
  
  for (i = 0; i < TAMANHO; i++){
    if (vetor[i] < 0){
      vetor[i] = 0;
    }
  }
  
  printf("\n");

   for (i = 0; i < TAMANHO; i++){
    printf("\nVetor[%d] : [%d] ", i, vetor[i]);
   }
}