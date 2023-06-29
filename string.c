//Modos de impressão de string

#include <stdio.h>

int main(void) {

  char nome[50];

  /*printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("\n%s\n", nome);*/ //nao imprime espaco

  printf("Digite seu nome: ");
  fgets(nome, 50, stdin);

  printf("\n%s\n", nome); //imprime caracteres especiais
  
  return 0;
}