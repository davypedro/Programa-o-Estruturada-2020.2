#include <stdio.h>

int main(void){
	
	 int hour, minute;
	 
	 printf("Digite um horario: ");
	 scanf("%d:%d", &hour, &minute);
	 
	 if(hour < 0 || hour >=24 || minute < 0 || minute > 59){
	 	printf("Horario invalido!");
	 } else {
	 	if (hour > 12){
	 		hour = hour - 12;
	 	} else if (hour == 0) {
		 	hour = 12;
		 }
	 	printf("\nA hora convertida eh: %.2d:%.2d", hour, minute);
	 	
	}
	 
	return 0;
}
