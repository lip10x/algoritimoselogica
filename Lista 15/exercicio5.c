#include <stdio.h>
#include <conio.h>

void main(){
	
	int num, num2, num3, num4, mult;
	
	printf("Informe o num 1: ");
	scanf("%d", &num);
	printf("Informe o num 2: ");
	scanf("%d", &num2);
	printf("Informe o num 3: ");
	scanf("%d", &num3);
	printf("Informe o num 4: ");
	scanf("%d", &num4);
	
	mult = num * num2 * num3 * num4;
	
	printf("Multiplicacao: %d", mult);
}
