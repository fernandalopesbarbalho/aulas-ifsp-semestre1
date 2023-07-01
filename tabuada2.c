//Tabuada

#include <stdio.h>

int main(void) {

  int n = 0, i = 0;

  printf("Digite N: \n");
  scanf("%d", &n);

  for(i = 1; i <= 10;i++){
    printf("%d x %d = %d\n",n,i,n*i);
  }
  
  return 0;
}
