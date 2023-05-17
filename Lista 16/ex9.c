#include <stdio.h>
#include <conio.h>

/*9 - Escreva um programa onde os números lidos serão somados até que a soma destes números seja igual ou maior do que 100.*/

void main(){
	int num, soma = 0, i;
	
	while(soma <= 100){
	
	printf("Digite um numero que sera somado ate 100: ");
	scanf("%d", &num);
	soma += num; 
	printf("Soma: %d\n", soma);
}
	i++;
}
