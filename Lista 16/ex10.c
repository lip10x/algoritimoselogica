#include <stdio.h>
#include <conio.h>

/*10 - Escreva um programa que leia o primeiro nome e a altura das moças inscritas em um concurso de beleza. 
Para cada leitura deverá ser realizado uma pergunta para o usuário para parar ou continuar (1 -continuar, 2 - parar). 
Ao final o programa deverá exibir: a altura da moça mais alta e o número de moças no concurso. Considere que todas as moças possuem altura diferente.*/

void main(){
	
	char nome[10];
	int resp = 1, qntd = 0;
	float alt, alta = 0;
	
	while (resp == 1){
		printf("\nprimeiro nome: ");
		scanf("%s", nome);
		
		printf("altura: ");
		scanf("%f", &alt);
		//incrementar qntd
		qntd++;
		
		//maior altura
		if(alt>alta){
			alta=alt;
		}
		
		printf("Deseja continuar? (1-sim, 2-nao): ");
		scanf("%d", &resp);
	}
	printf("Quantidade de garotas inscritas: %d", qntd);
	
	printf("\nMaior altura: %f", alta);
}
