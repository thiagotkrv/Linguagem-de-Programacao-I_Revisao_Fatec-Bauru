#include <stdio.h>

main(){
	
	int contador=83;
	
	printf("[] -  DIVISIVEIS POR 9 - []\n");
	for (contador=83; contador<=108; contador++){
		if( contador%9==0){
			printf("%d\n", contador);
		}
	}
}
