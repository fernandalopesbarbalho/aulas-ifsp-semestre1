//Verifica se um número é positivo ou negativo

#include <stdio.h>

int main(void) {
  int num = 0;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num > 0){
		printf("Positivo\n");
	}else{
		printf("Negativo\n");
	}
  
  return 0;
}