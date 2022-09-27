#include <stdio.h>

int main(void){

    int num, dezenas, unidades, desvinte;

    printf("Digite um numero de dois digitos: ");
    scanf("%d", &num);

    dezenas = num / 10;
    unidades = num % 10;
    desvinte = 10 + unidades;

    if (num >= 20){
        switch(dezenas){
            case 9: printf("Noventa");break;
            case 8: printf("Oitenta");break;
            case 7: printf("Setenta");break;
            case 6: printf("Sessenta");break;
            case 5: printf("Cinquenta");break;
            case 4: printf("Quarenta");break;
            case 3: printf("Trinta");break;
            case 2: printf("Vinte");break;
            }

        switch(unidades){
            case 1: printf(" e um");break;
            case 2: printf(" e dois");break;
            case 3: printf(" e tres");break;
            case 4: printf(" e quatro");break;
            case 5: printf(" e cinco");break;
            case 6: printf(" e seis");break;
            case 7: printf(" e sete");break;
            case 8: printf(" e oito");break;
            case 9: printf(" e nove");break;
        }
    }

    else if (num > 0 && num <10){
        switch(num){
            case 1: printf("Um"); break;
            case 2: printf("Dois");break;
            case 3: printf("Tres");break;
            case 4: printf("Quatro");break;
            case 5: printf("Cinco");break;
            case 6: printf("Seis");break;
            case 7: printf("Sete");break;
            case 8: printf("Oito");break;
            case 9: printf("Nove");break;


        }
    }
    else {
        switch(desvinte){
            case 10: printf("Dez");break;
            case 11: printf("Onze");break;
            case 12: printf("Doze");break;
            case 13: printf("Treze");break;
            case 14: printf("Quartoze");break;
            case 15: printf("Quinze");break;
            case 16: printf("Dezesseis");break;
            case 17: printf("Dezessete");break;
            case 18: printf("Dezoito");break;
            case 19: printf("Dezenove");break;
        }
    }

    return 0;
}
