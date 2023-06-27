//Recebe três notas de um aluno, faz a média e verifica se foi reprovado ou aprovado. Escreva “Reprovado” quando a média for menor que 4; Escreva “Prova final” quando média for maior igual a 4 e menor que 7; “Aprovado” quando a média for maior que 7.

#include <stdio.h>

int main(void) {
  double nota1 = 0, nota2 = 0, nota3 = 0;

  printf("Digite a primeira nota: ");
  scanf("%lf", &nota1); 
  
  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);  

  printf("Digite a terceira nota: ");
  scanf("%lf", &nota3); 

  double media = (nota1 + nota2 + nota3)/3;

  printf("A media e: %g\n", media);

  if (media < 4){
    printf("Reprovado\n");

  }else{
    if(media < 7){
      printf("Prova final\n");
    }else{
      printf("Aprovado\n");
    }
  }
  
  return 0;
}