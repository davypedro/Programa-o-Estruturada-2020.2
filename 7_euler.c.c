#include <stdio.h>

int main(void){
	
	int N = 10;
	int i, j;
	float fat, euler = 1.0;
	
	printf("Digite N! (onde N! eh o denominador) para convergir para o somatorio de Euler: ");
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++){
		fat = 1;
		for(j = 1; j <= i; j++){
			fat *= j;
		}
		euler = euler + 1.0 / fat;
	}
	
	printf("%f", euler);
	
	return 0;
}
