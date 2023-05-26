#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, a altura e o código do sexo de uma pessoa 
(código = 1 se for masculino e 2 se for feminino), e calcule e imprima:
- a maior e a menor altura da turma;
- a média de altura das mulheres;
- a média de altura da turma.
- a quantidade de homens.*/


void main(){
	
	float i = 0, altura, sex, contMasc, contFem, maiorAltura, menorAltura = 0, medTurma, medFem, alturaFem, medAlturaTurma;
	
	while (i<3){
	
	printf("Insira a altura: ");
	scanf("%f", &altura);
	
	printf("\nEscolha o genero: 1-Masculino 2-Feminino: ");
	scanf("%f", &sex);
	
	medTurma = medTurma + altura;
	
	i++;
	
	if (sex == 1){
		contMasc++;
	}
	if (sex != 1){
		contFem++;
		alturaFem = alturaFem + altura;
	}
	if (altura > maiorAltura){
		maiorAltura = altura;
	}
	else 
		menorAltura = altura;
	
	}
	
	medFem = alturaFem / contFem;
	medAlturaTurma = medTurma / i;
	 
	printf("\nQuantidade de homens: %f", contMasc);
	printf("\nMedia da altura das mulheres: %f", medFem);
	printf("\nMedia de altura da turma: %f", medAlturaTurma);
	printf("\nMaior altura da turma: %f", maiorAltura);
	printf("\nMenor altura da turma: %f", menorAltura);
	
}
