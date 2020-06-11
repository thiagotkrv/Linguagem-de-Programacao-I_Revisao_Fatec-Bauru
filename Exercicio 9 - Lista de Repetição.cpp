#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	
	int contador=0, idade, idadetotal;
	float media;
	for (contador=0; contador<=4; contador++){
	printf("Digite a idade: ");
	scanf("%d", &idade);
	idadetotal=idadetotal+idade;
	}
	media=idadetotal/contador;
		printf("A media das idades apresentadas e de %.1f anos\n", media);
}


