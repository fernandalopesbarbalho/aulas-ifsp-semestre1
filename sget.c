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
    printf("Digite uma string:\n");
    sget( vetor, TAM);
    printf("Depois da sget: %s.\n", vetor);
}