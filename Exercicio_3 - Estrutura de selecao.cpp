#include <stdio.h>

main (){
	int x;
	printf("Digite o numero: ");
	scanf("%d", &x);
	if((x%5)==0){
		printf("O numero e divisivel por 5!");
	}else {
		printf("O numero nao e divisivel por 5!");
	}
}
