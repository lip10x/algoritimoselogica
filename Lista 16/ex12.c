#include <stdio.h>
#include <conio.h>

/*12 - Fa�a um programa que leia um n�mero indeterminado de idades. A �ltima idade lida, que n�o entrar� nos c�lculos, dever� ser igual a zero. 
Ao final programa dever� escrever quantas idades foram lidas, calcular e escrever a m�dia de idade desse grupo de idades.*/

void main(){
	
	int idade =1, qntd, media, somaidade;
	
	while(idade != 0){
	
	printf("Informe as idade: ");
	scanf("%d", &idade);
	
	qntd++;
	
	somaidade = somaidade + idade;
	}
	qntd--;
	printf("Quantidade de idades lidas: %d",qntd);
	media = somaidade / qntd;
	printf("\nMedia de idades: %d", media);
}
