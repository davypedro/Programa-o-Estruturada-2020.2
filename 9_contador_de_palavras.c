#include <stdio.h>

int main(void){
	
	char ch, ch_anterior;
	int palavras = 1;
	
	printf("Digite uma frase: ");
	ch = getchar();
	ch_anterior = ch;
	
	while (ch != '\n'){
		if(ch == ' ' && ch_anterior != ' ') 
			palavras++;
		
		ch_anterior = ch;
		ch = getchar();
	}
	
	printf("A frase tem %d palavras!", palavras);
	
	return 0;
}
