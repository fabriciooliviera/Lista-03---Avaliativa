#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 0
#define FALSE  1

	int main(){
	char frase[100];
	char palavra[100];
	int tamanho=0;
	int tamanho2=0;
	int palavracomparacao=0;
	int achou = FALSE;
	int i=0;
	int contador=0;
	printf("Digite uma frase: ");
	gets(frase);
    printf("\n");
    printf("Digite uma palavra para verificar se contém na frase:\n");
    gets(palavra);
    tamanho=strlen(frase);
    tamanho2=strlen(palavra);
    for(i=0; achou == FALSE && i < tamanho; i++)
{
      for(contador=0; achou == FALSE && contador < tamanho2; contador++)
{
         if(frase[i]==palavra[contador])
{
        palavracomparacao++;
        if(palavracomparacao==tamanho2) {
        achou = TRUE; 
        }
        } 
        }
        }
        if(achou == TRUE)
		{
    	printf("\n***** achou o resultado - EXISTE \n");
        } else {
    	printf("\n****** NAO ACHOU \n");
        }
 	system("pause");
    return 0 ;
}
