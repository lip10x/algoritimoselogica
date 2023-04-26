#include <stdio.h>
#include <conio.h>

void main(){
	char nome[80];
	char sobrenome[80];
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("Insira seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome completo: %s %s", nome, sobrenome);
	
}
