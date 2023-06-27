#include <stdio.h>

int main() {
  //exercicio 5
  double qtd_dolar;
  double valor_dolar;
  double total;
  
  printf("Digite o valor do dolar: ");
  scanf("%lf", &valor_dolar);

  printf("Digite quantidade de dolares: ");
  scanf("%lf", &qtd_dolar);

  total = qtd_dolar*valor_dolar;

  printf("$%g = R$%g\n", qtd_dolar, total);
  
}