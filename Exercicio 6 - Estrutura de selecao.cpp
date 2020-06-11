#include <stdio.h>

main(){
	
	float cl;
	printf("Digite o valor da conta de luz: R$ ");
	scanf("%f", &cl);
	if (cl>150.00){
		printf("Voce esta gastando muito!");
	} else {
		printf("Seu gasto foi normal!");
	}
	
}
