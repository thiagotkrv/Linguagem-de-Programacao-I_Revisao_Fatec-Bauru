#include <stdio.h>

main(){
	int contador, x, qtd=0, soma=0;
	
	for(contador=1; contador<=20; contador++){
		printf("Digite o %d numero: ", contador);
		scanf("%d", &x);
		if(x>0){
			soma=soma+x;
		} else {
			qtd++;
		}
	}
	printf("A soma dos numeros positivos e igual a %d e a quantidade de numeros negativos e igual a %d.\n", soma, qtd);
}
