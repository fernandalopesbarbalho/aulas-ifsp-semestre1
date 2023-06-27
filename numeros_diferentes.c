//Verifica se dois números são diferentes

#include <stdio.h>

int main(void) {
  int num1 = 0, num2 = 0;
  
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  if(num1 == num2){
    printf("Iguais\n");
  }else{
    printf("Diferentes!\n");
    
}
  
  return 0;
}