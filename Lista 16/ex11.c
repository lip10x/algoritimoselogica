#include <stdio.h>
#include <conio.h>

/*11 - Elaborar um programa que possibilite calcular a �rea de cada c�modo de uma resid�ncia (por exemplo: sala, cozinha, banheiro, quartos, etc..). 
O programa deve solicitar a entrada do nome, da largura e do comprimento de um determinado c�modo, em seguida dever� apresentar a �rea do c�modo lido
 e tamb�m a mensagem solicitando ao usu�rio a confirma��o de continuar calculando novos c�modos. 
 A opera��o deve ser repetida at� que o usu�rio responda "1 - N�O". �rea = largura * comprimento.*/
 
 void main(){
 	
 	float largura, comprimento, area;
 	char comodo[50];
 	int resp = 0;
 	
 	while(resp != 1){
	
	//informa��es do comodo
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
 	
 	//controle de repeti��o
	printf("\nDeseja adicionar outro comodo? (1-nao 2-sim)");
 	scanf("%d", &resp);
	}
 	
 	
 }


