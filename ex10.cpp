#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int cont1=0, cont2=1, cont3=0;
	int num=0;
	char teste;
	
	printf("Olá, digite um número: ");
	scanf("%d", &num);
		
		for(cont1=1;cont2<=num;cont1++) 
		{
			printf("\t\t");
			int contAux = cont1; 
			for(;contAux > 0;contAux--, cont2++)
			{
				printf("%d ",cont2); 
			}
				printf("\n");
		}		
	return 0;
}

