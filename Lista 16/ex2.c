#include <stdio.h>
#include <conio.h>

/*2 - Faça um programa como uma estrutura de repetição começando de 1 e vai até o número informado pelo usuário.*/

void main(){
	
	int i = 1, num;
	
	printf("Informe o maximo de numeros: ");
	scanf("%d", &num);
	
	while (i <= num){
		printf("%d\n", i);
		i++;
	}	
}
