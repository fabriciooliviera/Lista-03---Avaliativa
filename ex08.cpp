#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main ()
{
	setlocale(LC_ALL,"");
	int i;
	float num,
  	soma = 0;
	for(i=1;i<=10;i++)
{
	printf("Digite um número: ");
	scanf("%f", &num);
	soma = soma + num; 
}
	printf("A soma dos números e %f: " , soma);
return 0;
}
