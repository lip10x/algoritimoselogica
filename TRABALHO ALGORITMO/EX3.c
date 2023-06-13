#include <stdio.h>
#include <conio.h>

void main(){
	
	
	int i, mat, matAluno, contReprovado=0, contReprovFrequencia=0, totalAlunos=10;
	float frequenciaAluno=0, frequencia=0;
	float nota1, nota2, nota3, notaAluno, menorNota, maiorNota, medNotaTurma, totalFreq=0, contMedia;
	
	
	for (i = 1; i <= 10; i++){
		
		printf("\nInforme a matricula do aluno: ");
		scanf("%d", &mat);
		
		printf("Informe a nota 1: ");
		scanf("%f", &nota1);
		
		printf("Informe a nota 2: ");
		scanf("%f", &nota2);
		
		printf("Informe a nota 3: ");
		scanf("%f", &nota3);
		
		printf("Informe a frequencia (porcentagem): ");
		scanf("%f", &frequencia);
		
		//nota final de cada aluno
		
			notaAluno = (nota1+nota2+nota3)/3;
			matAluno = mat;
		
		
		//sistema para escolher a maior nota:
		
		if (notaAluno > maiorNota){
		maiorNota = notaAluno;
		}	
		
		//sistema para a escolher a menor nota:
		
		if (i == 1) {
        menorNota = notaAluno;
    	} else if (notaAluno < menorNota) {
        menorNota = notaAluno;
		}
		
		//sistema para calculo de quem reprovou
		
		if (notaAluno < 6){
			contReprovado++;
		}
		
		//sistema para contar a porcentagem de reprovação por faltas:
		
		if (frequencia < 40 || notaAluno < 6){
			contReprovFrequencia++;
		}
		
		//contagem de alunos reprovados:
		
		contMedia += notaAluno;
			
		//mostra o nome de cada aluno e sua nota final:
			
		printf("\nNota do aluno %d : %.2f", matAluno, notaAluno);
		
	}	
	
	//calculo da porcentagem de alunos reprovados por faltas:
	
	totalFreq = (float) contReprovFrequencia / totalAlunos * 100;
	
	//mostra a menor e maior nota da turma:
	
	printf("\nMaior nota final da turma: %.2f", maiorNota);
	printf("\nMenor nota final da turma: %.2f", menorNota);
	
	//mostra a media da nota final de toda a turma:
	
	printf("\nMedia de nota final da turma: %.2f", contMedia/i);
	
	//mostra a quantidade de alunos reprovados e calcula:
	
	printf("\nQuantidade de alunos reprovados: %d", contReprovado);
	
	//mostra a porcentagem de alunos reprovados por falta:
	
	printf("\nPorcentagem de alunos reprovados por frequencia: %.2f%%", totalFreq);
	
	
	
	

		
	
	

}	
	
	
	
	
	
	
	
	
