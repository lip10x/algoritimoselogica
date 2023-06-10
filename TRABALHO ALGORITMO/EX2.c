#include <stdio.h>
#include <conio.h>

/*2.	Escreva um algoritmo que:
- leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
- determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
- Suponha que não exista dois ou mais alunos com a mesma nota.*/

void main(){
	
	int mat, i = 0, matMaior = 0, matSegundaMaiorNota = 0;
	float nota = 0, maiorNota = 0, segundaMaiorNota = 0;
	
	do{
		
	printf("Insira sua matricula: ");
	scanf("%d", &mat);
	printf("Insira sua nota: ");
	scanf("%f", &nota);
	
	if (nota > maiorNota){
		maiorNota = nota;
		matMaior = mat;
	}
	else if (nota < maiorNota && nota > segundaMaiorNota){
		segundaMaiorNota = nota;
		matSegundaMaiorNota = mat;
	}
		
		
		
	i++;	
	}while(i<7);
	
	printf("\nMaior nota da turma: %f", maiorNota);
	printf("\nMatricula da pessoa da maior nota: %d", matMaior);
	printf("\nSegunda maior nota da turma: %f", segundaMaiorNota);
	printf("\nMatricula da pessoa com a segunda maior nota: %d", matSegundaMaiorNota);
	
	
	
}

