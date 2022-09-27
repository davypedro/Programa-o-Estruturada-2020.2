#include <stdio.h>

int main(void) {
	
	float fahrenheit, celsius;
	
	printf("Digite o valor em fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5/9;
	
	printf("Celsius: %f", celsius); 
	
	return 0;
}
