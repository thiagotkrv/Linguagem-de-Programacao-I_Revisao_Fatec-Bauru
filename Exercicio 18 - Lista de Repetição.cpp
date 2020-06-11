#include <stdio.h>

main(){
	int contador, x, fatorial=1;
	printf("Digite o numero a ser exibido o fatorial: ");
	scanf("%d", &x);
	for(contador=x; contador>=1; --contador){
		fatorial=fatorial*contador;
	}
	printf("%d! = %d", x, fatorial);
}
