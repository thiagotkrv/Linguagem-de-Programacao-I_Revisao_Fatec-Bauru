#include <stdio.h>

main(){
	int contador;
	float chico=1.50, juca=1.10;
	for(contador=1; contador<=100; contador++){
		chico=chico+0.02;
		juca=juca+0.03;
		if (juca>chico){
			printf("Em %d anos Juca tera %.2f metros de altura e Chico tera %.2f metros de altura.\n", contador, juca, chico);
			printf("Juca sera mais alto que Chico.\n");
			return 0;
		}
	}
	
}
