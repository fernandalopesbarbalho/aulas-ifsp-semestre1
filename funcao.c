/*Escreva uma função em C que calcule o quadrado de um número.*/

#include <stdio.h>

int calcularQuadrado(int n); //ASSINATURA DA FUNCAO

int main(void) {
  int resultado = 0;

  resultado = calcularQuadrado(10);

  printf("%d",calcularQuadrado(10));
  
  return 0;
}

int calcularQuadrado(int n){ //função
  return n * n;
}