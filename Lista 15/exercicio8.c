#include <stdio.h>
#include <conio.h>

void main(){
	
	float nota1, nota2, nota3, media;
	
	printf("Indique a nota 1: ");
	scanf("%f", &nota1);
	printf("Indique a nota 2: ");
	scanf("%f", &nota2);
	printf("Indique a nota 3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) /3;

	printf("Sua media: %f", media);	
	
}
