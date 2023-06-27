//Faça um programa que leia um conjunto de números e imprima sua soma e sua média. O fim da leitura é efetuado quando for informado o valor 0 (zero).

#include <stdio.h>

int main(void) {
  int num = 0, soma = 0, qtd = 0;
  double media = 0;

  printf("Digite um número ou 0 para sair: \n");
  scanf("%d", &num);

  while(num != 0){
    soma = soma + num;
    qtd = qtd + 1;

    printf("Digite um número ou 0 para sair: \n");
    scanf("%d", &num);
  }

  media = soma/qtd;

  printf("Soma: %d, Média: %g", soma, media);

  return 0;
}