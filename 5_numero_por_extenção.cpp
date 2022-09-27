#include <stdio.h>

int main(void){
	
	int num, dezenas, unidades, desvinte;
	
	printf("Digite um numero de 2 digitos: ");
	scanf("%d", &num);
	
	dezenas = num / 10;
	unidades = num % 10;
	desvinte = 10 + unidades;
	
	if (num >= 20){
		switch(dezenas){
			case 9: printf("Noventa");
			break;
			case 8: printf("Oitenta");
			break;
			case 7: printf("Setenta");
			break;
			case 6: printf("Sessenta");
			break;
			case 5: printf("Cinquenta");
			break;
			case 4: printf("Quarenta");
			break;
			case 3: printf("Trinta");
			break;
			case 2: printf("Vinte");
			break;
		}
		switch(unidades){
			case 9: printf(" e Nove");
			break;
			case 8: printf(" e Oito");
			break;
			case 7: printf(" e Sete");
			break;
			case 6: printf(" e Seis");
			break;
			case 5: printf(" e Cinco");
			break;
			case 4: printf(" e Quatro");
			break;
			case 3: printf(" e Tres");
			break;
			case 2: printf(" e Dois");
			break;
			case 1: printf(" e Um");
			break;
		}
	}
	else if(num > 0 && num < 10){
		switch(num){
			case 1: printf("Um");
			break;
			case 2: printf("Dois");
			break;
			case 3: printf("Três");
			break;
			case 4: printf("Quatro");
			break;
			case 5: printf("Cinco");
			break;
			case 6: printf("Seis");
			break;
			case 7: printf("Sete");
			break;
			case 8: printf("Oito");
			break;
			case 9: printf("Nove");
			break;
		}
	}
	else {
		switch(desvinte){
			case 10: printf("Dez");
			break;
			case 11: printf("Onze");
			break;
			case 12: printf("Doze");
			break;
			case 13: printf("Trese");
			break;
			case 14: printf("Quatorze");
			break;
			case 15: printf("Quinze");
			break;
			case 16: printf("Dezesseis");
			break;
			case 17: printf("Dezessete");
			break;
			case 18: printf("Dezoito");
			break;
			case 19: printf("Desenove");
			break;
		}
	}
	
	return 0;
}
