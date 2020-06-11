#include <stdio.h>

main(){
	int contador, x, qtd=0;
	
	for(contador=1; contador<=15; contador++){
		printf("Digite o %d numero: ", contador);
		scanf("%d", &x);
		if(x>30){
			qtd++;
		}
	}
	printf("A quantidade de numero maiores que 30 e igual a %d.\n", qtd);
}
