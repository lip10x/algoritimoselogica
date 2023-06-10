#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, a altura e o código do sexo de uma pessoa 
(código = 1 se for masculino e 2 se for feminino), e calcule e imprima:
- a maior e a menor altura da turma;
- a média de altura das mulheres;
- a média de altura da turma.
- a quantidade de homens.*/


void main(){
	
	float i = 0, altura = 0, sex = 0, contMasc = 0, contFem = 0, maiorAltura = 0, menorAltura = 0, medTurma = 0, medFem = 0, alturaFem = 0, medAlturaTurma;
	
	while (i<=10){
	
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
	if (i == 1) {
        menorAltura = altura;
    } else if (altura < menorAltura) {
        menorAltura = altura;
    }
		
	
	}
	
	medFem = alturaFem / contFem;
	medAlturaTurma = medTurma / i;
	 
	printf("\nQuantidade de homens: %0.1f", contMasc);
	printf("\nMedia da altura das mulheres: %0.2f", medFem);
	printf("\nMedia de altura da turma: %0.2f", medAlturaTurma);
	printf("\nMaior altura da turma: %0.2f", maiorAltura);
	printf("\nMenor altura da turma: %0.2f", menorAltura);
	
}
