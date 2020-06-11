#include <stdio.h>

main(){
	int contador, x, qtd=0;
	
	for(contador=1; contador<=10; contador++){
		printf("Digite o %d numero: ", contador);
		scanf("%d", &x);
		if (x>=100 && x<=200){
			qtd++;
		} else if (x==0){
			return 0;
		}
	}
	printf("Foram digitados %d numero entre 100 e 200.\n", qtd);
}
