#include <stdio.h>

main (){
	float salario, credito, prestacao, limite; 
	int numero_parcelas;
	printf("Digite o salario do servidor: ");
	scanf("%f", &salario);
	printf("Digite o valor do credito solicitado: ");
	scanf("%f", &credito);
	printf("Digite o numero de parcelas a serem pagas: ");
	scanf("%d", &numero_parcelas);
	prestacao=credito/numero_parcelas;
	limite=(salario/100)*30;
	if(prestacao<=limite){
		printf("Credito aprovado dentro do limite!");
	}else {
		printf("Credito nao aprovado por exceder o limite de 30%% do salario!");
	}
}
