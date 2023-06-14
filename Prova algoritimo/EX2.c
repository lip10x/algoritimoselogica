#include <stdio.h>
#include <conio.h>


void main(){
	
	int i = 1, olhos, sexo, contMulherOlhosAzul, contOlhosCast;
	float salario, maior_salario, menor_salarioHomem, somaMulherOlhosAzul = 0, medMulherOlhosAzul = 0;
	
	for (i = 1; i < 5; i++){
		
		printf("Informe seu salario: ");
		scanf("%f", &salario);
		
		printf("Escolha a cor dos olhos: \n");
		printf("(1-azul, 2-verde, 3-preto ou 4-castanho)\n");
		scanf("%d", &olhos);
		
		printf("Escolha o sexo: \n");
		printf("(1-feminino, 2-masculino) \n");
		scanf("%d", &sexo);
		
		if(olhos==2 && salario > maior_salario){
				maior_salario = salario;
		}
		
		else
		
		if(i==1){
				menor_salarioHomem = salario;
			if(salario < menor_salarioHomem){
				menor_salarioHomem = salario;
			}
		}
		
		else
		
		if(olhos==1 && sexo==1){
				somaMulherOlhosAzul += salario;
				contMulherOlhosAzul++;
		}
		
		else
		
		if(olhos==4){
			contOlhosCast++;
		}
		
		
		
	}
	
		medMulherOlhosAzul = somaMulherOlhosAzul/contMulherOlhosAzul;
	
		printf("Maior salario dentre quem tem olhos verdes: %.2f\n", maior_salario);
		printf("Menor salario dentre os homens: %.2f\n", menor_salarioHomem);
		printf("Media salarial das mulheres de olhos azuis: %.2f\n", medMulherOlhosAzul);
		printf("Quantidade de pessoas com olhos castanhos: %d", contOlhosCast);
		
	
	
}
