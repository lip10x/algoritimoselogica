#include <stdio.h>
#include <conio.h>

/*7 - Desenvolva um programa que apresente todos os n�meros divis�veis por 4 na faixa de 20 a 60.*/

void main(){
	int i = 20;
	while (i <= 60){
		if (i % 4 == 0){
			printf("%d eh divisivel por 4\n", i);
		}
		i++;
	}
}
