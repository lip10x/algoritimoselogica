#include <stdio.h>
#include <conio.h>

void main(){
	
	int nasc, idade, atual;
	
	printf("Informe o seu ano de nascimento: ");
	scanf("%d", &nasc);
	printf("Informe o ano atual: ");
	scanf("%d", &atual);
	
	idade = atual - nasc;
	
	printf("Sua idade: %d", idade);
	
	
}
