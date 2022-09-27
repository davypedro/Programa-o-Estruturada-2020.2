#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	char c;
	int i, flag = 1;
	int palavra1[26] = {0};
	int palavra2[26] = {0};
	
	printf("Digite a primeira palavra: ");
	do {
		c = getchar();
		palavra1[c - 97]++;
	} while (c != '\n');
	
	printf("Digite a segunda palavra: ");
	do {
		c = getchar();
		palavra2[c - 97]++;
	} while (c != '\n');
	
	for (i = 0; i < 26; i++){
		if (palavra1[i] != palavra2[i]){
			flag = 0;
			break;
		}
	}
	
	if (flag == 0)
		printf("Não é um anagrama!");
	else
		printf("É um anagrama!");
	
	return 0;
}
