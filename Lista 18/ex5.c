#include <stdio.h>
#include <conio.h>


void main(){
	int i;
	float num, somapos = 0, contneg = 0;
	for(i = 1;i <= 5; i++){
		printf("Informe um numero: ");
		scanf("%f", &num);
		if(num >= 0){
			somapos += num;
		}
		else {
			contneg++;
		}	
	}
	printf("\nSoma dos positivos: %f",somapos);
	printf("\nQtde de negativos: %f",contneg);
}
