#include <stdio.h>
#include <conio.h>

void main(){
	
	int num, num2;
	
	printf("Informe o num1:");
	scanf("%d", &num);
	printf("Informe o num2:");
	scanf("%d", &num2);
	
	if(num > num2){
		
		printf("%d eh maior", num);
		
	}
	else{
		if(num == num2){
			printf("Numeros iguais");
	}
		else{
			printf("%d eh maior", num2);
		}
		}
	
	
}
