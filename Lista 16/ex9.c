#include <stdio.h>
#include <conio.h>

/*9 - Escreva um programa onde os n�meros lidos ser�o somados at� que a soma destes n�meros seja igual ou maior do que 100.*/

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
