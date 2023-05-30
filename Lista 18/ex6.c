#include <stdio.h>
#include <conio.h>

void main(){
	
	int i;
	float num, maior = 0, segundo_maior = 999, num_maior = 0;
	for (i = 1; i <= 4; i++){
		printf("Insira um numero: ");
		scanf("%f", &num);
		if(i == 1){
			maior = num;
			segundo_maior = num;
		}
		if(num > maior){
			maior = num;
		}
		else{
			if (num < segundo_maior){
				segundo_maior = num;
			}
		}
	}
	printf("\nMaior numero: %f", maior);
	printf("\nSegundo maior: %f", segundo_maior);
}
