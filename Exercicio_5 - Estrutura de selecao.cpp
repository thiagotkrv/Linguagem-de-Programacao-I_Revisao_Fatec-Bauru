#include <stdio.h>

main (){
	float salario, gastos; 
	printf("Digite o salario: ");
	scanf("%f", &salario);
	printf("Digite o valor total dos gastos: ");
	scanf("%f", &gastos);
	if(gastos<=salario){
		printf("Gastos dentro do orcamento!");
	}else {
		printf("Orçamento estourado!");
	}
}
