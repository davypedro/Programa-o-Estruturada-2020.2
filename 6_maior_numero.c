#include <stdio.h>

int main(void){
	
	int numero, maior;
	maior = 0;
	
	printf("Escrava um numero: ");
	scanf("%d", &numero);
	
	while (numero != 0){
		if (numero > maior){
			maior = numero;
		}
		printf("Digite outro numero: ");
		scanf("%d", &numero);
	}
	
	printf("O maior numero eh: %d", maior);
	
	return 0;
}
