#include <stdio.h>

main (){
	float valor, desconto, total;
	int cliente;
	printf("Codigo dos clientes: ");
	printf("\n1 - Comum \n2 - Funcinario \n3 - VIP");
	printf("\nDigite o codigo do cliente: ");
	scanf("%d", &cliente);
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	switch (cliente){
		case 1:
			printf("O valor total da compra e de %.2f", valor); break;
		case 2:
			desconto=(valor/100)*10;
			total=valor-desconto;
			printf("O valor total da compra e de %.2f", total); break;
		case 3:
			desconto=(valor/100)*5;
			total=valor-desconto;
			printf("O valor total da compra e de %.2f", total); break;
	}
}
