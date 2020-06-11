#include <stdio.h>

main(){
	
	int contador=25, soma=0;
	for (contador=25; contador<=199; contador++){
		if( contador%2==0){
		soma=soma+contador;
	}
}
	printf("A soma dos numeros pares entre 25 e 200 e igual a %d\n", soma);
}
