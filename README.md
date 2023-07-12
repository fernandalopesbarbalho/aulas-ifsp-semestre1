# Aulas de Programação em C
Códigos em linguagem C produzidos em aula durante primeiro semestre de Análise e Desenvolvimento de Sistemas (IFSP), referente à matéria de Algoritmos e Programação.

As demais aulas do semestre e seus exercícios para entrega estão melhor descritos no repositório [Exercícios de Programação em C](https://github.com/fernandalopesbarbalho/exercicios-ifsp-semestre1).

## Aula 1 - 21/03/23
### Oi Mundo
Primeiro código em C, imprime "Oi, mundo!".

## Aula 2 - 28/03/23
### Bom Dia
Imprime "Bom dia", usando o caractere de controle '\n'.
### Avião
Imprime dados sobre o vôo de um avião utilizando operadores matemáticos.
### Dólar
Imprime informações sobre o valor do dólar utilizando o tipo de variável double.
### Dólar 2
Recebe as informações sobre o preço do dólar e sua quantidade, imprimindo a quantidade de dólares e seu valor correspondente em reais.

## Aula 3 - 04/04/23 (IF)
### Maior de Idade
Recebe a idade da pessoa e verifica se tem mais de 18 anos.
### Números Diferentes
Recebe dois números e verifica se são diferentes.
### Positivo ou Negativo
Recebe um número e verifica se é positivo ou negativo.
### Ímpar ou Par
Recebe um número e verifica se é ímpar ou par.
### Aprovação
Recebe três notas de um aluno, calcula a média e verifica se foi reprovado, aprovado ou se está de recuperação.

## Aula 4 - 18/04/23 (WHILE)
### Soma e Média
Recebe um conjunto de números e imprime sua soma e sua média. O conjunto de números para de ser armazenado quando o número informado é igual a 0.
### Pares e Ímpares
Recebe um conjunto de números e imprime a quantidade de pares e ímpares. O conjunto de números para de ser armazenado quando o número informado é igual a 0.
### Maior Número
Recebe 15 números inteiros e imprime o valor do maior número digitado.

## Aula 5 - 09/05/23 (FOR)
### Ímpares até Mil
Lista os números ímpares até mil.
### Tabuada 2
Recebe um número e imprime sua tabuada.

## Aula 6 - 16/05/23 (BIBLIOTECAS e MÓDULOS)
## Bibliotecas
Testa funções como pow(), que calcula exponencição, sqrt(), que calcula a raiz de um número, e srand(time(NULL)), que retira informações da hora do sistema para a criação de números randomicos.
## Parâmetro
Subprograma que verifica se um número é ímpar ou par.
## Função
Função que calcula o quadrado de um número.

## Aula 7 - 06/06/23 (VETOR)
### Vetor
Recebe uma sequência de 10 números, armazena em um vetor e imprime a posição do número e seu valor.
### Define
Recebe uma sequência de 5 números e imprime a quantidade deles que são pares. Utiliza a constante #define para o tamanho do vetor.
### Define 2
Recebe uma sequência de 10 números, imprime sua posição no vetor e seu valor, depois inprime novamente, porém substituindo os valores menores que zero por zero.
### String
Recebe e imprime o nome de uma pessoa usando fgets e stdin.

## Aula 8 - 13/06/23
### Função e Vetor
Função que duplica o valor de todos os elementos de um vetor.
### Papagaio
Programa que recebe strings e imprime repetidamente enquanto não é digitado o caractere '#'.
### Poda Strings
Programa que recebe um número e imprime as strings recebidas depois no tamanho do número informado até que seja digitado uma string vazia (Enter).
### sget
Exemplo de utilização do sget para strings disponibilizado pelo professor.

## Aula 9 - 04/07/23 (MATRIZES E SWITCH CASE)
### Tabuleiro Preto e Branco
Cria e imprime um tabuleiro de xadrez sem inicializar a matriz de inteiros que representa com um '0' para as casas brancas e '1' para as casas pretas.
### Tabuleiro de Xadrez
Cria e imprime um tabuleiro de xadrez inicializando a matriz de caracteres, sendo que: casas vazias contém espaços, casas ocupadas contém a inicial da peça (R=rei, D=dama, T=torre, B=bispo, C=cavalo e P=peão) e letras minúsculas indicam peças brancas e maiúsculas peças pretas.
### Função Tabuleiro Ganhador
Função que recebe como parâmetro uma matriz do tabuleiro como, por exemplo, a do exercício Tabuleiro de Xadrez e calcula a diferença material entre as brancas e as pretas, considerando as os valores das peças por: dama = 9, torre = 5, bispo = 3, cavalo = 2,5, peão = 1. Por fim, retorna seu resultado. Se a diferença material for negativa, significa que as peças brancas (letras minúsculas) têm uma vantagem material sobre as peças pretas. Se for positiva, indica que as peças pretas (letras maiúsculas) têm uma vantagem material sobre as brancas. Se for zero, indica que as pontuações são iguais para ambos os lados.
