#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

	int main (){
	char fraseNova[255];
	char frase[255];
	int tamanho;
	int j = 0,x = 0;
	setlocale(LC_ALL,"");
    printf("Olá, digite uma frase: ");
    gets(frase);
	tamanho=strlen(frase);
    for(x=0; x <= tamanho ; x++){
        if(frase[x] != ' ') {
        	fraseNova[j]=frase[x];
        	j++;
        }
    }
    printf("%s\n", fraseNova);
    system ("pause");
    return(0);
}
