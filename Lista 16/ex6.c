#include <stdio.h>
#include <conio.h>

/*6 - Criar um Calculador de Tabuadas. O usu�rio dever� digitar o n�mero desejado e o programa dever� fazer a tabuada desse n�mero de zero a 10.*/

void main(){
	
	int num, tab, i = 0;
	printf("Digite um numero para calcular a tabuada do mesmo: ");
	scanf("%d", &num);
	while (i <= 10){
		tab = num * i;
		printf("%d x %d = %d\n", num, i, tab);
		i++;
	}
}
