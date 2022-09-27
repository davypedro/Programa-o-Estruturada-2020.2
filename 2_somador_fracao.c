//1)A)    86,1040
//B)3.02530e+001
//C)83.1620(Houve um arrendamento)
//D)1e-006

//2)10.3
//5
//1010737418245

#include <stdio.h>

int main (void){
	
	int num1, den1, num2, den2, numerador, denominador;
	
	
	
	printf("Digite a primeira fracao: ");
	scanf("%d/%d", &num1, &den1);
	printf("Digite a segunda fracao: ");
	scanf("%d/%d", &num2, &den2);
	
	denominador = (den1 * den2);
	numerador = (den1*num2 + den2*num1);
	
	printf("\nA soma das fracoes eh: %d/%d", numerador, denominador);
	
	return 0;
}
