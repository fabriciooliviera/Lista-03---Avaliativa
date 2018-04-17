#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	int main (){
	
	setlocale(LC_ALL,"");

	char palavra [40];
	int i;
	int tamanho=0;
	
		printf("Olá, digite uma palavra:\n");
		gets(palavra);
		printf("\n");
		tamanho = strlen(palavra);
			for(i=0; i<tamanho; i++)
			{ 
			printf("%c", palavra[i]);
			printf(" ");
						
			}
			printf("\n");
			
	system("pause");
		
}
