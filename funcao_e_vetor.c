/*
• Faça uma função dobra(), que duplica o valor de todos os elementos
de um vetor. Ela deve receber como parâmetro o vetor e o tamanho
ocupado do vetor. No seu teste, após chamar a função, imprima o
vetor.
• Exemplo de uso da função:
int vetor[] = { 32, 15, 25, 14};
dobra(vetor, 4); // chama a função
• Aqui vetor contém { 64, 30, 50, 28 }
• O mesmo vetor é entrada e saída da função.
*/

#include <stdio.h>

void dobra(int vetor[], int tam){
  int i;
  for (i = 0; i < tam; i++){
    vetor[i] += vetor[i];
  }
  
  printf("\nO dobro e: ");
  for (i = 0; i < tam; i++){
    printf("\nVetor[%d] : [%d] ", i, vetor[i]);
  }
}

int main(void) {
  int vetor[] = {32, 14, 25, 14};
  dobra(vetor, 4);
  
  return 0;
}