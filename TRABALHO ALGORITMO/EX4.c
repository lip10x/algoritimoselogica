#include<stdio.h>
#include<conio.h>



void main (){
	int i, idade,voto, diferenca_bomotimo, maior_idade, maior_idadeO, maior_idadeR, cont_valores, cont_bom, cont_regular, cont_otimo, cont_Motimo, cont_Mbom;
	int cont_Mregular, cont_ruim, cont_Mruim, cont_pessimo, cont_Mpessimo, diferenca_4A, meida_allruim ,media_bM;
	
	printf("Informe sua opini�o quanto ao filme:\n");
	
	printf("1 - Otimo\n");
	printf("2- Bom\n");
	printf("2- Regular\n");
	printf("4- Ruim\n");
	printf("5 - Pessimo\n");
	
	for(i=0;i<=6;++i){
		printf("Informe sua idade : \n");
		scanf("%d",&idade);
		printf("Escolha seu voto\n");
		scanf("%d",&voto);
		
		switch (voto){
			
			case 1:
				printf("Escolheu otimo\n");
				cont_otimo++;
				cont_valores++;
				if (idade >18){
					cont_Motimo++;
					if(maior_idadeO > idade){
						maior_idadeO = idade;
					}
				}
				break;
				
			case 2 :
				printf("Escolheu bom\n");
					cont_bom++;
					cont_valores++;
				if (idade >18){
					cont_Mbom++;
				
				break;
				
			case 3 :
				printf("Escolheu regular\n");
					cont_valores++;
					cont_regular;
				if (idade >18){
					cont_Mregular++;
			}
				break;
				
			case 4 :
				printf("Escolheu ruim\n");
					cont_ruim++;
					cont_valores++;
				if(idade >18){
					cont_Mruim++;
					if (maior_idadeR > idade){
						maior_idadeR = idade;
					}
					else{
					}
				}
				break;
				
			case 5 :
				printf("Escolheu pessimo\n");
					cont_pessimo++;
					cont_valores++;
				if(idade >18){
					cont_Mpessimo++;
					if (maior_idade > idade) {
						maior_idade = idade;
					}
					else{

					}
				};
			break;
			default:
			break;
			}
		}
	

	}
	printf("Quantidade obtida de votos avaliados como otimo: %d\n", cont_otimo);
	
		if(cont_bom > cont_regular){
		diferenca_bomotimo= (cont_valores - cont_bom) - (cont_valores - cont_regular);	
		}
		
		if(cont_regular > cont_bom){
		diferenca_bomotimo= (cont_valores - cont_regular)- (cont_valores - cont_bom) ;
		}
		
	printf("Diferenca de respostas bom e regular: %d\n",diferenca_bomotimo);
	
		meida_allruim= cont_valores / cont_ruim;
		
	printf("Media de todos votos contados ruim: %f\n",meida_allruim);
	 
		media_bM=(cont_pessimo / cont_valores)  * 100;
		
	printf("Percentagem de respostas péssimo: %f\n",media_bM);
	
	printf("Maior idade que utilizou esta opção: %d\n",maior_idade);
	
		if(maior_idadeR > maior_idadeO){
		diferenca_4A = maior_idadeR-maior_idadeO;	
		}
		if(maior_idadeO > maior_idadeR){
		diferenca_4A = maior_idadeO - maior_idadeR;
		}
		
	printf("Diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d\n",diferenca_4A );
}
