//Aluno: Davy Pedro Moreira de Moura
//Matricula: 20170115635

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITES 20

int print_matriz(int linha, int coluna, int array[linha][coluna]);

int redimencionar(int i, int j, int array[i][j], int ni, int nj, int narray[ni][nj]);

void transposta(int array[LIMITES][LIMITES], int rows, int columns);

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int array[LIMITES][LIMITES] =  {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}}; //LINHAS E COLUNAS EM SUA FORMA ABSTRATA 
						
	int narray[LIMITES][LIMITES];
	
	print_matriz(3, 4, array);
	redimencionar(3, 4, array, 4, 3, narray);
	transposta(array, 3, 4);
	}

int print_matriz(int linha, int coluna, int array[linha][coluna]){
	
	int s, *p, g = 0;
	
	printf("\n\t\tMATRIZ PARÂMETRO!\n\n");
	for(s = 0; s < linha; s++){
		for(p = array[s]; p <= array[s] + coluna-1; p++){
			g++;			
			printf("%5d", g);
		}
		putchar('\n');
	}
}

int redimencionar(int i, int j, int array[i][j], int ni, int nj, int narray[ni][nj]){
																						
	int p, s, n, g = 0, *pointer, *k;
	int red1, red2;
	
	red1 = i * j;
	red2 = ni * nj;
	
	if(red1 == red2){
		for(s = 0; s < i; s++){
			for(pointer = array[s]; pointer <= array[s] + j-1; pointer++){
				g++;			
				narray[n][g] = g;
			}
			putchar('\n');
		}
		printf("\t\tREDIMENSIONADO!\n\n");
		for(s = 0; s < ni; s++){
				for(k = narray[s]+1; k <= narray[s] + nj; k++){			
					printf("%5d", *k);
				}
				putchar('\n');
			}
	}else{
		printf("\n\t\tERRO! NÃO É POSSÍVEL REDIMENSIONAR UM ARRAY COM UMA QUANTIDADE DIFERENTES DE ELEMTENTOS DO ARRAY ORIGINAL. POR FAVOR, TENTE NOVAMENTE\n");
	}
}

void transposta(int array[LIMITES][LIMITES], int rows, int columns){
	
    int i, j;
    int array_t[LIMITES][LIMITES];
    
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j = j + 1) array_t[j][i] = array[i][j];
    printf("\n\n\t\tTRANSPOSTA!\n\n");
    for (i = 0; i < columns; i = i + 1){
        for (j = 0; j < rows; j = j + 1){
			printf("%5d", array_t[i][j]);
		}
		putchar('\n');
	}
}

