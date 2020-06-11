#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	
	int contador=0, idade, qtd;
	char gen;
	float salario, media, totalsal=0.0;
	for (contador=0; contador<=4; contador++){
	do{
	printf("Digite o genero - M - Maculino | F - Feminino: ");
	scanf("%s", &gen);
	if(gen!= 'M' && gen!= 'm' && gen != 'F' && gen != 'f'){
		printf("Opcao invalida!\n");
		getch();
		system("cls");
	}
	}	
	while(gen!= 'M' && gen!= 'm' && gen != 'F' && gen != 'f');
	switch(gen){
		case 'M': case 'm':
			printf("Digite a idade do entrevistado: ");
			scanf("%d", &idade);
			printf("Digite o salario do entrevistado: ");
			scanf("%f", &salario);
			break;
		case 'F': case 'f':
			printf("Digite a idade da entrevistada: ");
			scanf("%d", &idade);
			printf("Digite o salario da entrevistada: ");
			scanf("%f", &salario);
			if(salario <= 1500){
				qtd++;
			}
			break;
	}
	totalsal=totalsal+salario;
	getch();
	system("cls");
	}
	media=totalsal/contador;
	printf("A media de salario dos entrevistados e de %.2f e a qauntidade de mulheres que recebem ate R$ 1.500,00 de salario e de %d.\n", media, qtd);
}
