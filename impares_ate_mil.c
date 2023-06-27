//Números de 0 a 1000 impares

#include <stdio.h>

int main(void) {

  int i = 1;

  for(; i < 1000; i += 2){
    printf("%d\n", i);
  }
  
  return 0;
}