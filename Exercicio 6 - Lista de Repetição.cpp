#include <stdio.h>

main(){
	
	int contador, x, y, soma=0;
	printf("Digite um primeiro valor: ");
	scanf("%d", &x);
	do{
	printf("Digite um segundo valor: ");
	scanf("%d", &y);
	if(y<x){
		printf("Entre com um numero maior que o primeiro!\n");
	}
	}	
	while(y<x);
	for (contador=x; contador<=y; contador++){
		soma=soma+contador;
	}
	printf("A soma dos inteiros e igual a %d\n", soma);
}
