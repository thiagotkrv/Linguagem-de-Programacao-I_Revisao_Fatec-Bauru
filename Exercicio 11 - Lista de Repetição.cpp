#include <stdio.h>

main(){
	
	int contador=1;
	
	printf("[] -  NUMEROS PARES - []\n");
	for (contador=01; contador<=600; contador++){
		if( contador%2==0){
			printf("%d\n", contador);
		}
	}
}
