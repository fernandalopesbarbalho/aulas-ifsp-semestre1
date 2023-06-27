//Verifica se um número é par ou impar

#include <stdio.h>

int main(void) {
  int num = 0;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num % 2 == 0){
		printf("Par");
	}else{
		printf("Impar");
	}
  
  return 0;
}