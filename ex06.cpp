#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i     = 0,
        copia = 0;
        
    char     frase[100],
         maiuscula[100],
         minuscula[100];
    
    // limparBuffer();
    printf("Olá, digite uma  frase:\n");    
    fgets(frase,sizeof(frase),stdin); 
    //scanf("%[^\n]s", frase);
    copia=strlen(frase);
    printf("-> %s\n",frase);
    for(i=0;i<copia;i++)
    {
        if(frase[i]>=65 && frase[i]<=90)
        {
           maiuscula[i]=frase[i];
           minuscula[i]=frase[i]+32;
        }
        else
        {
           if(frase[i]>=97 && frase[i]<=122)
           {
              maiuscula[i]=frase[i]-32;
              minuscula[i]=frase[i];
           }
           else
           {
              maiuscula[i]=frase[i];
              minuscula[i]=frase[i];
           }
        }
	}    
    printf("%s",maiuscula);
    printf("\n");
    printf("%s",minuscula);

     return 0;
}
