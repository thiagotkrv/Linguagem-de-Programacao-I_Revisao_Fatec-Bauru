#include <stdio.h>

main (){
	

	float sal, remun, gratif, imp, pag;
	
	printf("\nDigite o salario-base do funcionario: R$ ");
	scanf("%f", &sal);
	gratif=(sal/100)*5;
	remun=(sal+gratif);
	imp=(remun/100)*7;
	pag=(remun-imp);
	printf("\n\n\n");
	printf("Salario-Base: R$ %.2f \nGratificacao: R$ %.2f \nImposto: - R$ %.2f \nTotal a receber: R$ %.2f", sal, gratif, imp, pag);
	
	
}
