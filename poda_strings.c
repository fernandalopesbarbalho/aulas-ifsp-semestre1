/*
Poda strings: Faça um programa que pergunte ao usuário um número
inteiro n, uma só vez, e depois, repetidamente, pergunte uma string e
imprima esta string, porém limitada a n caracteres. O programa deve
encerrar quando o usuário digitar uma string vazia (Enter).
Exemplo: "Digite N: " 4
"Digite uma string: " abcdefg
abdc
"Digite uma string: " 12345
1234
"Digite uma string: " paralelepidedo
para
"Digite uma string: " IF
IF
"Digite uma string: "
*/


#include <stdio.h>
#include <string.h>
/* sget() empacota fgets para stdin, chamando fflush
e retirando o \n do final*/
int sget( char* vetor, int tam) {
    fflush(stdin); // Livra-se de teclas antigas
    if (fgets(vetor, tam, stdin)) { 
        int i;
        for( i=0; vetor[i] != '\n' && vetor[i]; ++i)
            ;
        vetor[i] = '\0';
    }
}

int main(void) {
    int tam = 0;

    printf("Digite N: ");
    scanf("%d", &tam);

    char vetor[tam];
  
    while (vetor[0] != '\0'){

      printf("Digite uma string: ");
      sget(vetor, tam += 1);
      printf("Depois da sget: %s\n", vetor);
      
    }
}