#include <stdio.h>
#include <conio.h>


void main(){
	int i, idade, cont_idade = 0;
	for (i=1;i<=2;i++){
		printf("Insira a idade: ");
		scanf("%d", &idade);
		if(idade >= 18){
			cont_idade++;
		}
	}
	printf("\nQuantidade de maiores de idade: %d", cont_idade);
}
