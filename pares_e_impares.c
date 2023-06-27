//Faça um programa que leia um conjunto de números (inteiros) e mostre a quantidade de números pares e a quantidade de números ímpares lidos. Admita que o valor 0 (zero) é utilizado para marcar o fim da leitura.

#include <stdio.h>

int main(void) {

  int numero = 0, qtd_pares = 0, qtd_impares = 0;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  while (numero != 0){
    
    if (numero % 2 == 0){
      qtd_pares = qtd_pares + 1;
    }else{
      qtd_impares = qtd_impares + 1;
    }

    printf("Digite um numero ou 0 para sair: ");
    scanf("%d", &numero);
  }

  printf("Pares: %d, Impares: %d", qtd_pares, qtd_impares);
  
  return 0;
}