#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  double x = 5, y = 2, resultado = 0;

  resultado = pow(x, y);
  printf("%g\n", resultado); //exponenciacao

  resultado = sqrt(x);
  printf("\n%g\n\n", resultado); //raiz

  srand(time(NULL)); //retira informações da hora do sistema para a criação de numeros randomicos

  for(int i = 0; i < 10; i++){
    printf("%d\n", rand() % 100);
  }
}