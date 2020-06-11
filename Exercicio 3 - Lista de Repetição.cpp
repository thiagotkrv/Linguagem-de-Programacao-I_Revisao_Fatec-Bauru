#include <stdio.h>

main(){
	
	int contador=1, x, tabuada;
	do{
	printf("Digite o numero a ser apresentada a tabuada: ");
	scanf("%d", &x);
	
		if (x<1 || x>10){
			printf("Favor digitar valor maior que zero e menor ou igual a 10!\n");
		}
	}
	while (x<1 || x>10);
	printf("[] - Tabuada do %d - []\n", x);
	for (contador=1; contador<=10; contador++){
		tabuada=x*contador;
		printf("%d X %d = %d\n", x, contador, tabuada);
		}
}
