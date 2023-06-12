#include <stdio.h>
#include <conio.h>

void main(){
	
	
	int i, mat, matAluno1, matAluno2, matAluno3, matAluno4, matAluno5, matAluno6, matAluno7, matAluno8, matAluno9, matAluno10, contReprovado=0, contReprovFrequencia=0, frequencia=0;
	float frequenciaAluno1=0, frequenciaAluno2=0, frequenciaAluno3=0, frequenciaAluno4=0, frequenciaAluno5=0, frequenciaAluno6=0, frequenciaAluno7=0, frequenciaAluno8=0, frequenciaAluno9=0, frequenciaAluno10=0;
	float nota1, nota2, nota3, notaAluno1, notaAluno2, notaAluno3, notaAluno4, notaAluno5, notaAluno6, notaAluno7, notaAluno8, notaAluno9, notaAluno10, menorNota, maiorNota, medNotaTurma, totalFreq=0;
	
	
	for (i = 1; i <= 3; i++){
		
		printf("Informe a matricula do aluno: ");
		scanf("%d", &mat);
		
		printf("Informe a nota 1: ");
		scanf("%f", &nota1);
		
		printf("Informe a nota 2: ");
		scanf("%f", &nota2);
		
		printf("Informe a nota 3: ");
		scanf("%f", &nota3);
		
		printf("Informe a frequencia (porcentagem): ");
		scanf("%d", &frequencia);
		
		//nota final de cada aluno
		
		if(i==1){
			notaAluno1 = (nota1+nota2+nota3)/3;
			matAluno1 = mat;
		}
		if(i==2){
			notaAluno2 = (nota1+nota2+nota3)/3;
			matAluno2 = mat;
		}
		if(i==3){
			notaAluno3 = (nota1+nota2+nota3)/3;
			matAluno3 = mat;
		}
		/*if(i==4){
			notaAluno4 = (nota1+nota2+nota3)/3;
			matAluno4 = mat;
		}
		if(i==5){
			notaAluno5 = (nota1+nota2+nota3)/3;
			matAluno5 = mat;
		}
		if(i==6){
			notaAluno6 = (nota1+nota2+nota3)/3;
			matAluno6 = mat;
		}
		if(i==7){
			notaAluno7 = (nota1+nota2+nota3)/3;
			matAluno7 = mat;
		}
		if(i==8){
			notaAluno8 = (nota1+nota2+nota3)/3;
			matAluno8 = mat;
		}
		if(i==9){
			notaAluno9 = (nota1+nota2+nota3)/3;
			matAluno9 = mat;
		}
		if(i==10){
			notaAluno10 = (nota1+nota2+nota3)/3;
			matAluno10 = mat;
		}*/
		
		//sistema para escolher a maior nota:
		
		if (notaAluno1 > maiorNota){
		maiorNota = notaAluno1;
		}
		if (notaAluno2 > maiorNota){
		maiorNota = notaAluno2;
		}	
		if (notaAluno3 > maiorNota){
		maiorNota = notaAluno3;
		}	
		/*if (notaAluno4 > maiorNota){
		maiorNota = notaAluno4;
		}	
		if (notaAluno5 > maiorNota){
		maiorNota = notaAluno5;
		}	
		if (notaAluno6 > maiorNota){
		maiorNota = notaAluno6;
		}	
		if (notaAluno7 > maiorNota){
		maiorNota = notaAluno7;
		}	
		if (notaAluno8 > maiorNota){
		maiorNota = notaAluno8;
		}	
		if (notaAluno9 > maiorNota){
		maiorNota = notaAluno9;
		}	
		if (notaAluno10 > maiorNota){
		maiorNota = notaAluno10;
		}*/		
		
		//sistema para a escolher a menor nota:
		
		if (i == 1) {
        menorNota = notaAluno1;
    	} else if (notaAluno1 < menorNota) {
        menorNota = notaAluno1;
		}
    	else if (notaAluno2 < menorNota) {
        menorNota = notaAluno2;
		}
    	else if (notaAluno3 < menorNota) {
        menorNota = notaAluno3;
		}
		/*else if (notaAluno4 < menorNota) {
        menorNota = notaAluno4;
		}
		else if (notaAluno6 < menorNota) {
        menorNota = notaAluno6;
		}
		else if (notaAluno7 < menorNota) {
        menorNota = notaAluno7;
		}
		else if (notaAluno7 < menorNota) {
        menorNota = notaAluno7;
		}
		else if (notaAluno8 < menorNota) {
        menorNota = notaAluno8;
		}
		else if (notaAluno9 < menorNota) {
        menorNota = notaAluno9;
		}
		else if (notaAluno10 < menorNota) {
        menorNota = notaAluno10;
		}*/
		
		//sistema para calculo de quem reprovou
		
		if (notaAluno1 < 6){
			contReprovado++;
		}
		else if (notaAluno2 < 6){
			contReprovado++;
		}
		else if (notaAluno3 < 6){
			contReprovado++;
		}
		/*else if (notaAluno4 < 6){
			contReprovado++;
		}
		else if (notaAluno5 < 6){
			contReprovado++;
		}
		else if (notaAluno6 < 6){
			contReprovado++;
		}
		else if (notaAluno7 < 6){
			contReprovado++;
		}
		else if (notaAluno8 < 6){
			contReprovado++;
		}
		else if (notaAluno9 < 6){
			contReprovado++;
		}
		else if (notaAluno10 < 6){
			contReprovado++;
		}*/
		
		//sistema para contar a porcentagem de reprovação por faltas:
		
		if (i==1){
			frequenciaAluno1=frequencia;
		}
		if (i==2){
			frequenciaAluno2=frequencia;
		}
		if (i==3){
			frequenciaAluno3=frequencia;
		}
		/*if (i==4){
			frequenciaAluno4 = frequencia;
		}
		if (i==5){
			frequenciaAluno5 = frequencia;
		}
		if (i==6){
			frequenciaAluno6 = frequencia;
		}
		if (i==7){
			frequenciaAluno7 = frequencia;
		}
		if (i==8){
			frequenciaAluno8 = frequencia;
		}
		if (i==9){
			frequenciaAluno9 = frequencia;
		}
		if (i==10){
			frequenciaAluno10 = frequencia;
		}*/
		
		if (frequenciaAluno1 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno2 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno3 < 75){
			contReprovFrequencia++;
		}
		/*else if (frequenciaAluno4 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno5 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno6 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno7 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno8 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno9 < 75){
			contReprovFrequencia++;
		}
		else if (frequenciaAluno10 < 75){
			contReprovFrequencia++;
		}*/
		
		
}

	//calculo da media de notas finais de toda a turma:
	
//	medNotaTurma = (notaAluno1 + notaAluno2 + notaAluno3 + notaAluno4 + notaAluno5 + notaAluno6 + notaAluno7 + notaAluno8 + notaAluno9 + notaAluno10)/10;
	medNotaTurma = (notaAluno1+notaAluno2+notaAluno3)/3;
	
	//calculo da porcentagem de alunos reprovados por faltas:
	
	totalFreq = (contReprovFrequencia*100) /i;
	
	//mostra o nome de cada aluno e sua nota final:
	
	printf("\nNota do aluno %d : %f", matAluno1, notaAluno1);
	printf("\nNota do aluno %d : %f", matAluno2, notaAluno2);
	printf("\nNota do aluno %d : %f", matAluno3, notaAluno3);
	/*printf("\nNota do aluno %d : %f", matAluno4, notaAluno4);
	printf("\nNota do aluno %d : %f", matAluno5, notaAluno5);
	printf("\nNota do aluno %d : %f", matAluno6, notaAluno6);
	printf("\nNota do aluno %d : %f", matAluno7, notaAluno7);
	printf("\nNota do aluno %d : %f", matAluno8, notaAluno8);
	printf("\nNota do aluno %d : %f", matAluno9, notaAluno9);
	printf("\nNota do aluno %d : %f", matAluno10, notaAluno10);*/
	
	
	//mostra a menor e maior nota da turma:
	
	printf("\nMaior nota final da turma: %f", maiorNota);
	printf("\nMenor nota final da turma: %f", menorNota);
	
	//mostra a media da nota final de toda a turma:
	
	printf("\nMedia de nota final da turma: %f", medNotaTurma);
	
	//mostra a quantidade de alunos reprovados:
	
	printf("\nQuantidade de alunos reprovados: %d", contReprovado);
	
	//mostra a porcentagem de alunos reprovados por falta:
	
	printf("\nPorcentagem de alunos reprovados por frequencia: %f", totalFreq);
	
	
	
	
	
	
	

}	
	
	
	
	
	
	
	
	
