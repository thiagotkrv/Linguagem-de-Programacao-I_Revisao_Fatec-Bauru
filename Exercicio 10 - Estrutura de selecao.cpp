#include <stdio.h>

main(){
	char nome[50], categoria;
	float salario, salarionovo, aumento;
	printf("Digite o nome do funcionario: ");
	gets(nome);
	do{
	printf("Digite a categoria do funcionario: \nM - Mensalista | H - Horista: ");
	scanf("%c", &categoria);
	if (categoria != 'm' && categoria != 'M' && categoria != 'h' && categoria != 'H'){
		printf("Categoria Invalida!");
	}
	}
	while (categoria != 'm' && categoria != 'M' && categoria != 'h' && categoria != 'H');
	switch (categoria){
		case 'm': case 'M':
			printf("Digite o salario do Funcionario: R$ ");
			scanf("%f", &salario);
			aumento = (salario/100)*10;
			salarionovo = aumento + salario;
			printf("Nome: %s; \nCategoria: %c \nSalario: R$ %.2f; \nPercentual de aumento: 10%%; \nSalario Novo: R$ %.2f; \nAumento: R$ %.2f", nome, categoria, salario, salarionovo, aumento);
			break;
		case 'h': case 'H':
			printf("Digite o salario do Funcionario: R$ ");
			scanf("%f", &salario);
			aumento = (salario/100)*20;
			salarionovo = aumento + salario;
			printf("Nome: %s; \nCategoria: %c \nSalario: R$ %.2f; \nPercentual de aumento: 20%%; \nSalario Novo: R$ %.2f; \nAumento: R$ %.2f", nome, categoria, salario, salarionovo, aumento);
			break;
	}
}
