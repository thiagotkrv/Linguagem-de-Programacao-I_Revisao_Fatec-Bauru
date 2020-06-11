#include <stdio.h>

main(){
	
	int contador=1;
	
	printf("[] -  MULTIPLOS DE 10 - []\n");
	for (contador=1; contador<=100; contador++){
		if( contador%10==0){
			printf("Multiplo de 10\n");
		} else {
			printf("%d\n", contador);
		}
	}
}
