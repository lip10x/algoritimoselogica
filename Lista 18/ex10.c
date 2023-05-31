#include <stdio.h>
#include <conio.h>


void main(){
	int i, olho, qtde_olhos_pretos = 0, cont_turma = 0, cont_azul = 0;
	float salario, maior_salario = 0, salario_turma, media_salario_turma, media_azul, salario_azul;
	
	for(i=1;i<=2;i++){
		printf("Informe o salario: ");
		scanf("%f", &salario);
		printf("Informe a cor do olho (1-azul, 2-preto): ");
		scanf("%d", &olho);
		
		if(olho == 2){
			qtde_olhos_pretos++;
		}
		if(salario > maior_salario){
			maior_salario = salario;
		}
		cont_turma++;
		salario_turma += salario;
		
		if(olho == 1){
			cont_azul++;
			salario_azul += salario;	
		}
	}
	printf("\nQuantidade de pessoas de olhos pretos: %d", qtde_olhos_pretos);
	printf("\nMaior salario: %0.2f", maior_salario);
	media_salario_turma = salario_turma / cont_turma;
	printf("\nMedia salario da turma: %0.2f", media_salario_turma);
	media_azul = salario_azul / cont_azul;
	printf("\nMedia de pessoas que possuem olhos azuis %0.2f", media_azul);
	
}
