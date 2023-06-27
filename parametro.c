/*
Escreva um subprograma (procedimento) em C que recebe um valor inteiro e verifica se o valor é par ou ímpar.
*/

#include <stdio.h>

void verificarParOuImpar(int n){
  if(n % 2 == 0){
    printf("\nPar");
    
  }else{
    printf("\nImpar");
  }
}


int main(void) {
  verificarParOuImpar(10);
  return 0;
}