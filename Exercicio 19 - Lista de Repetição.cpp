#include <stdio.h>

main(){
	int contador, x, qtd=0;
	printf("Digite o numero a ser verificado: ");
	scanf("%d", &x);
	for(contador=1; contador<=x; contador++){
		if(x%contador==0){
			qtd++;
		}
	}
	if(qtd==2){
		printf("o numero %d e primo", x);
	} else {
		printf("o numero %d e nao primo", x);
	}
	
}
