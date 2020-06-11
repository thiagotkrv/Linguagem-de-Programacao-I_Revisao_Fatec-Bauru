#include <stdio.h>

main(){
	
	int contador=11, soma=0;
	for (contador=11; contador<=89; contador++){
		soma=soma+contador;
		printf("%d\n", contador);
	}
	printf("A soma dos numeros e igual a %d\n", soma);
}
