//Verifique se a pessoa é maior de idade

#include <stdio.h>

int main() {

	int idade = 0;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	 
	if (idade >= 18){
		printf("Ok! Pode passar!\n");
	}else{
		printf("Nao pode passar!\n");
	}
	
	printf("Fim!");
	
	return 0;
}