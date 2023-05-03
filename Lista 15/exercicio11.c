#include <stdio.h>
#include <conio.h>

void main(){
	
	int num, num2, media;
	
	printf("Informe um numero positivo e inteiro: ");
	scanf("%d", &num);
	printf("Informe outro numero positivo e inteiro ");
	scanf("%d", &num2);

	
	if(num > 0 && num2 > 0){
		
		media = (num + num2) /2;
		printf("%d media eh igual a ", media);
		
	}
	else{
		if(num < 0 && num2 < 0){
			printf("Numeros negativos!");
		}
		else{
			if(num > 0 && num2 < 0){
				printf("%d invalido", num2);
			}
			else{
				if(num < 0 && num2 > 0){
					printf("%d invalido", num);
				}
				
			}
			
		}
		
		
	}
}
