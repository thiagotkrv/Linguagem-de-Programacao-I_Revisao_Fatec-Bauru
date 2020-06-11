#include <stdio.h>

main (){
	

	float c, pol;
	
	printf("\nDigite a medida em centimetros: ");
	scanf("%f", &c);
	pol=c*2.54;
	printf("\n\n\n");
	printf("%.2f centimetros equivale a %.2f polegadas", c, pol);
	
	
}
