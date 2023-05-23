#include <stdio.h>
#include <conio.h>

/*11 - Elaborar um programa que possibilite calcular a área de cada cômodo de uma residência (por exemplo: sala, cozinha, banheiro, quartos, etc..). 
O programa deve solicitar a entrada do nome, da largura e do comprimento de um determinado cômodo, em seguida deverá apresentar a área do cômodo lido
 e também a mensagem solicitando ao usuário a confirmação de continuar calculando novos cômodos. 
 A operação deve ser repetida até que o usuário responda "1 - NÃO". Área = largura * comprimento.*/
 
 void main(){
 	
 	float largura, comprimento, area;
 	char comodo[50];
 	int resp = 0;
 	
 	while(resp != 1){
	
	//informações do comodo
	printf("\nNome do comodo: ");
 	scanf("%s", comodo);
 	
	printf("Informe a largura do comodo: ");
 	scanf("%f", &largura);
 	
	printf("Informe o comprimento do comodo: ");
 	scanf("%f", &comprimento);
 	
 	//calculo da area
 	area = largura * comprimento;
 	
 	//mostrar a area
 	printf("\nArea do comodo: %f", area);
 	
 	//controle de repetição
	printf("\nDeseja adicionar outro comodo? (1-nao 2-sim)");
 	scanf("%d", &resp);
	}
 	
 	
 }


