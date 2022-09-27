//Davy Pedro Moreira de Moura

// A)1
// B)4

#include <stdio.h>

int main(){
	
	int a, b, aux;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("%d%d", a, b);
	
	return 0;
}
