#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main(){
		char frase [256];
		int tamanho=0;
		int i;
		int espaco=0;
		int espacototal=0;
		
		printf("Olá, digite uma frase:\n");
		gets(frase);
		printf("\n");
		tamanho = strlen(frase);
		for(i=0;i<=tamanho;i++){
			if(frase[i]== ' '){
				espaco++;
			}
				espacototal=espaco+1;
		}
		printf("Quantidade de palavras na frase: %d",espacototal);
	return 0;
	}
