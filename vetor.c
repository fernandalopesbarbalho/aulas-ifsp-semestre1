//Vetor de 10 números

#include <stdio.h>

int main(void) {
  int vetor[10], i;

  //receber os dados
  for (i = 0; i < 10; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  
  }

  //mostrar os dados
  for (i = 0; i < 10; i++){
    printf("\nVetor[%d] : [%d] ", i, vetor[i]);

  }
}