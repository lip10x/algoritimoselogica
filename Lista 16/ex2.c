#include <stdio.h>
#include <conio.h>

/*2 - Fa�a um programa como uma estrutura de repeti��o come�ando de 1 e vai at� o n�mero informado pelo usu�rio.*/

void main(){
	
	int i = 1, num;
	
	printf("Informe o maximo de numeros: ");
	scanf("%d", &num);
	
	while (i <= num){
		printf("%d\n", i);
		i++;
	}	
}
