#include <stdio.h>
#include <conio.h>

void main(){
	
	int i;
	float num, maior = 0, menor = 999;
	for (i = 1; i <= 4; i++){
		printf("Insira um numero: ");
		scanf("%f", &num);
		if(i == 1){
			maior = num;
			menor = num;
		}
		if(num > maior){
			maior = num;
		}
		else{
			if (num < menor){
				menor = num;
			}
		}
	}
	printf("\nMaior numero: %f", maior);
	printf("\nSegundo maior: %f", menor);
}
