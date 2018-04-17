#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h> 

	int main() 
	{
	setlocale(LC_ALL,"");
	char frase [100];
	int tamanho =0;
	int numero=0; 
	int i=0;
	int especial=0;
	int vogais =0;
	int letra =0;
	printf("Olá, digite uma frase:\n");
	printf("------------------------\n");
	gets(frase);
	tamanho = strlen(frase);
	printf("Tamanho da palavra:%d\n",tamanho);

	for(i=0; i<tamanho; i++){
	
		if((frase[i]=='a')||(frase[i]=='e')||(frase[i]=='i')||(frase[i]=='o')||(frase[i]=='u')){
			vogais++;
			//printf("[vogal] %c -> %d\n",frase[i],vogais);
		}
		if((frase[i]>=48 && frase[i]<=57) ){
	     	numero++;
	     	//printf("[numero] %c -> %d\n",frase[i],numero);
		}
		if((frase[i]>=32 && frase[i]<=47) || 
		   (frase[i]>=58 && frase[i]<=64) || 
		   (frase[i]>=91 && frase[i]<=96) ||
		   (frase[i]>=123 && frase[i]<=126)){
	     	especial++;
	       //printf("[especial] %c -> %d\n",frase[i],especial);
		}
		//printf("[elemento -> %c] [vogais -> %d] [numeros - %d] [especial->%d]\n",frase[i],vogais, numero,especial);
    }	
    printf("Quantidade de números na frase: %d\n",numero);
    printf("Quantidade de vogais na frase: %d\n",vogais);
    printf("Quantidade de consoantes na frase: %d\n",tamanho-vogais-especial-numero);
    printf("Quantidade de letras na frase: %d\n",tamanho-numero-especial);
	printf("Quantidade de caracteres especiais na frase: %d\n", especial);
		
	}

