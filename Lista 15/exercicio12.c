#include <stdio.h>
#include <conio.h>

void main(){
	
	float nota1, nota2, media;
	
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) /2;
	
	if(media >= 7){
		printf("%f \nAprovado!", media);
	}
	else{
		if(media < 7){
			printf("%f \nReprovado!", media);
		}
	}
	
}
