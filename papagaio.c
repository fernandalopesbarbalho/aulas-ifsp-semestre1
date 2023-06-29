/*
Faça um programa papagaio.c, que, repetidamente, pergunta uma
string para o usuário e a imprime. Use sget() e proteja sua impressão.
Saia quando o primeiro caractere digitado for '#'. Depois que
funcionar, defina um tamanho pequeno para o vetor e teste se
funciona mesmo para strings maiores que o vetor.
*/

//papagaio.c

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

#define TAM 200
int main(void) {
    char vetor[TAM];

    while (vetor[0] != '#'){
      
      printf("Digite uma string: ");
      sget(vetor, TAM);
      printf("Depois da sget: %s\n", vetor);
    }
}
  