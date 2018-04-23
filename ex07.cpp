#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

	int main(){
	setlocale(LC_ALL,"");
	int primeiro,ultimo,quantidadeElementos,somaDoPrimeiroComUltimo,pares,progressao;
	printf("Digite o primeiro número: ");
	scanf("%d",&primeiro);
	printf("Digite o segundo número: ");
	scanf("%d",&ultimo);
	quantidadeElementos= (ultimo - primeiro) +1;
	printf("QuantidadeElementos %d \n", quantidadeElementos);
	somaDoPrimeiroComUltimo = ultimo + primeiro;
	printf("A soma do primeiro com o último é: %d\n",somaDoPrimeiroComUltimo);
	pares = quantidadeElementos / 2;
	printf("Pares %d\n", pares);
	progressao = somaDoPrimeiroComUltimo * pares;
	printf("PA %d\n", progressao);
}
