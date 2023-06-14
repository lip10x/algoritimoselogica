#include <stdio.h>
#include <conio.h>


void main(){
	
	int escolha=1, numeroFav, sexo, contPar = 0, contNegMasc = 0, contPessoas = 0;
	float conta, saldoAcumulado;
	
	while(escolha!=0){
		
		printf("Insira o numero inteiro preferido: ");
		scanf("%d", &numeroFav);
		
		printf("Insira o valor da conta bancaria: ");
		scanf("%f", &conta);
		
		printf("Insira o sexo (1-M , 2-F)\n");
		scanf("%d", &sexo);
		
		
		if(numeroFav % 2 ==0){
			printf("\nNumero par!");
			contPar++;
		}
		else printf("\nNumero Impar");
		
		if(conta > 0){
			printf("\nConta bancaria positiva");
		}
		else if(conta < 0){
			printf("\nConta bancaria negativa");
		}
		
		if(conta < 0 && sexo==1){
			contNegMasc++;
		}
		
		saldoAcumulado = saldoAcumulado + conta;
		
		contPessoas++;
		
		printf("\nDeseja continuar? (1-sim , 0-nao)");
		scanf("%d", &escolha);
		
		
	}
	
	printf("\nTotal de numeros pares: %d\n", contPar);
	printf("\nTotal de homens com saldo negativo: %d\n", contNegMasc);
	printf("\nTotal de participantes: %d\n", contPessoas);
	printf("Saldo acumulado de todos os participantes: %f", saldoAcumulado);
	
	
	
	
}
