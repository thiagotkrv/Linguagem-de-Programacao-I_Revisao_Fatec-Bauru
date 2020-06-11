#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	
	int idade;
	do{
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	if (idade<5){
		printf("Idade Invalida! A idade minima dos nadadores e 5 anos!");
		getch();
		system("cls");
	}
	}
    while (idade< 5);
	if (idade>=5 && idade<8){
		printf("Categoria: Infatil A");
	} 
	else if (idade>=8 && idade<11){
		printf("Categoria: Infatil B");
	} 
	else if (idade>=11 && idade<14){
		printf("Categoria: Juvenil A");
	}
	else if (idade>=14 && idade<17){
		printf("Categoria: Juvenil B");
	} 
	else {
		printf("Categoria: Adulto");
	}
}
