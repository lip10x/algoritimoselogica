#include <stdio.h>
#include <conio.h>



	void main(){
		
		int opcao, escolha=1;
		float num1, num2, sub, div, soma, mult;
		
		while(escolha!=0){
			
			printf("Insira um numero: ");
			scanf("%f", &num1);
			printf("Insira outro numero: ");
			scanf("%f", &num2);
			
			printf("escolha a operacao matematica:");
			printf("1 - subtracao; 2 - divisao, 3 - soma e 4 - multiplicacao\n");
			scanf("%d", &opcao);
			
			if(opcao==1){
				sub = num1-num2;
				printf("Resultado: %.2f\n", sub);
				printf("Deseja continuar?(1-sim,0-nao) ");
				scanf("%d", &escolha);
			}
			if(opcao==2){
				div = num1/num2;
				printf("Resultado: %.2f\n", div);
				printf("Deseja continuar?(1-sim,0-nao) ");
				scanf("%d", &escolha);
			}
			if(opcao==3){
				soma = num1+num2;
				printf("Resultado: %.2f\n", soma);
				printf("Deseja continuar?(1-sim,0-nao) ");
				scanf("%d", &escolha);
			}
			if(opcao==4){
				mult = num1*num2;
				printf("Resultado: %.2f\n", mult);
				printf("Deseja continuar?(1-sim,0-nao) ");
				scanf("%d", &escolha);
			}
			if(opcao>=5){
				printf("opcao invalida!\n");
				printf("Deseja continuar?(1-sim,0-nao) ");
				scanf("%d", &escolha);
			}
			
			
			
		}
		
	}
