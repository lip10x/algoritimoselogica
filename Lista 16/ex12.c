#include <stdio.h>
#include <conio.h>

/*12 - Faça um programa que leia um número indeterminado de idades. A última idade lida, que não entrará nos cálculos, deverá ser igual a zero. 
Ao final programa deverá escrever quantas idades foram lidas, calcular e escrever a média de idade desse grupo de idades.*/

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
