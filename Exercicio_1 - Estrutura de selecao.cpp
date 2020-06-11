#include <stdio.h>

main (){
	int x, y;
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	if(x==y){
		printf("Os numero sao iguais!");
	}else {
		printf("Os numeros sao diferentes!");
	}
}
