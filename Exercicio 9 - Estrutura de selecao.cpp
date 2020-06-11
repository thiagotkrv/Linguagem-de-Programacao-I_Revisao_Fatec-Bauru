#include <stdio.h>

main(){
	
	int codigo;
	float salario, salarionovo, diferenca;
	printf("Digite o codigo do cargo, sendo: ");
	printf("\n101 - Gerente; \n102 - Engenheiro; \n103 - Tecnico; \nOutros Codigos - Outros Cargos;  ");
	printf("\nDigite o codigo desejado: ");
	scanf("%d", &codigo);
	switch (codigo){
		case 101:
			printf("Digite o salario do Gerente: R$ ");
			scanf("%f", &salario);
			diferenca = (salario/100)*10;
			salarionovo = diferenca + salario;
			printf("Cargo: Gerente; \nSalario: R$ %.2f; \nPercentual de aumento: 10%%; \nSalario Novo: R$ %.2f; \nDiferenca: %.2f", salario, salarionovo, diferenca);
			break;
		case 102:
			printf("Digite o salario do Engenheiro: R$ ");
			scanf("%f", &salario);
			diferenca = (salario/100)*20;
			salarionovo = diferenca + salario;
			printf("Cargo: Engenheiro; \nSalario: R$ %.2f; \nPercentual de aumento: 20%%; \nSalario Novo: R$ %.2f; \nDiferenca: %.2f", salario, salarionovo, diferenca);
			break;
		case 103:
			printf("Digite o salario do Tecnico: R$ ");
			scanf("%f", &salario);
			diferenca = (salario/100)*30;
			salarionovo = diferenca + salario;
			printf("Cargo: Tecnico; \nSalario: R$ %.2f; \nPercentual de aumento: 30%%; \nSalario Novo: R$ %.2f; \nDiferenca: %.2f", salario, salarionovo, diferenca);
			break;
		default:
			printf("Digite o salario do Funcionario: R$ ");
			scanf("%f", &salario);
			diferenca = (salario/100)*40;
			salarionovo = diferenca + salario;
			printf("Cargo: Outros; \nSalario: R$ %.2f; \nPercentual de aumento: 40%%; \nSalario Novo: R$ %.2f; \nDiferenca: %.2f", salario, salarionovo, diferenca);
			break;
	}
}
