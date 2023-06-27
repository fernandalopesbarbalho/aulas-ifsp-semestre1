#include <stdio.h>

int main() {
  //exercicio 4
  double qtd_dolar = 150;
  double valor_dolar = 5.17;
  double total = qtd_dolar*valor_dolar;

  printf("$%g = R$%g\n", qtd_dolar, total);

  qtd_dolar = 180;
  valor_dolar = 2.50;
  total = qtd_dolar*valor_dolar;

  printf("$%g = R$%g\n", qtd_dolar, total);
  
}