#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	
	int op, qtd;
	float valortotal;
	do {
	printf("[] - - - - C A R D A P I O  - - - - - []");
	printf("\n[] - - PRODUTO - - CODIGO - - PRECO - []");
	printf("\n[] CACHORRO QUENTE - 100 - - R$ 1,20  []");
	printf("\n[] BAURU SIMPLES - - 101 - - R$ 1,30  []");
	printf("\n[] BAURU COM OVO - - 102 - - R$ 1,50  []");
	printf("\n[] HAMBURGUER - - -  103 - - R$ 1,20  []");
	printf("\n[] CHEESEBURGUER - - 104 - - R$ 1,30  []");
	printf("\n[] REFRIGERANTE - -  105 - - R$ 1,00  []");
	printf("\n[] - - - - - - - - == - - - - - - - - []");
	printf("\nDigite o codigo do produto desejado: ");
	scanf("%d", &op);
	if (op != 100 && op != 101 && op != 102 && op != 103 && op != 104 && op != 105){
		printf("\nOpcao Invalida! Escolha o codigo conforme o cardapio!");
		getch();
		system("cls");
	}
	}
	while (op != 100 && op != 101 && op != 102 && op != 103 && op != 104 && op != 105);
	switch (op){
		case 100:
			do{
			printf("Digite a quantidade de CACHORRO QUENTE: ");
			scanf("%d", &qtd);
			if(qtd<1){
				printf("Escolha quantidade maior ou igual a 1!\n");
				getch();
			}
			}
			while (qtd<1);
			valortotal = qtd*1.20;
			printf("O valor total a pagar e de: R$ %.2f", valortotal);
			break;
		case 101:
			do{
			printf("Digite a quantidade de BAURU SIMPLES: ");
			scanf("%d", &qtd);
			if(qtd<1){
				printf("Escolha quantidade maior ou igual a 1!\n");
				getch();
			}
			}
			while (qtd<1);
			valortotal = qtd*1.30;
			printf("O valor total a pagar e de: R$ %.2f", valortotal);
			break;
		case 102:
			do{
			printf("Digite a quantidade de BAURU COM OVO: ");
			scanf("%d", &qtd);
			if(qtd<1){
				printf("Escolha quantidade maior ou igual a 1!\n");
				getch();
			}
			}
			while (qtd<1);
			valortotal = qtd*1.50;
			printf("O valor total a pagar e de: R$ %.2f", valortotal);
			break;
		case 103:
			do{
			printf("Digite a quantidade de HAMBURGUER: ");
			scanf("%d", &qtd);
			if(qtd<1){
				printf("Escolha quantidade maior ou igual a 1!\n");
				getch();
			}
			}
			while (qtd<1);
			valortotal = qtd*1.20;
			printf("O valor total a pagar e de: R$ %.2f", valortotal);
			break;
		case 104:
			do{
			printf("Digite a quantidade de CHEESEHAMBURGUER: ");
			scanf("%d", &qtd);
			if(qtd<1){
				printf("Escolha quantidade maior ou igual a 1!\n");
				getch();
			}
			}
			while (qtd<1);
			valortotal = qtd*1.30;
			printf("O valor total a pagar e de: R$ %.2f", valortotal);
			break;
		case 105:
			do{
			printf("Digite a quantidade de REFRIGERANTE: ");
			scanf("%d", &qtd);
			if(qtd<1){
				printf("Escolha quantidade maior ou igual a 1!\n");
				getch();
			}
			}
			while (qtd<1);
			valortotal = qtd*1.00;
			printf("O valor total a pagar e de: R$ %.2f", valortotal);
			break;		
	}
}
