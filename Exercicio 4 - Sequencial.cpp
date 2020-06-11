#include <stdio.h>

main(){
	
	int idadeatual, idadefutura, anonasc, anoatual;
	printf("Digite o ano atual: ");
	scanf("%d", &anoatual);
	printf("\nDigitei seu ano de nascimento: ");
	scanf("%d", &anonasc);
	idadeatual= anoatual-anonasc;
	idadefutura = 2038 - anonasc;
	printf("Sua idade atual e %d anos, e voce tera %d anos em 2038.", idadeatual, idadefutura);
}
