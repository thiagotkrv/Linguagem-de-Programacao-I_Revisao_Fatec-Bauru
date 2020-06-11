#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	
	int contador, x, y;
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	do{
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	if(y<x){
		printf("O segundo numero deve ser maior que o primeiro!");
	}
	}
	while(y<x);
	for (contador=x; contador<=y; contador++){
		if (contador > x && contador < y){
			printf("%d\n", contador);
		}
	}
}


