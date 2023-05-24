#include <stdio.h>
#include <conio.h>

void main(){
	float nota1, nota2, media = 0;
	int resp, qntd_aprov = 0;
	
	do{
	
	printf("Informe a 1. Nota: ");
	scanf("%f", &nota1);
	
	printf("Informe a 2. Nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("Media: %0.2f", media);
	
	if(media>7){
		qntd_aprov++;
	}
	
	printf("\nDeseja continuar? 1-sim 2-nao ");
	scanf("%d", &resp);
	}while(resp == 1);
	printf("Quantidade de aprovados: %d", qntd_aprov);
}
