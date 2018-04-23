#include <stdio.h>
#include <stdlib.h>

int main (){
     int cont,i;
     printf ("Imprima a tabuada do 1 ate o 10\n");
     cont = 0;
        do{
            cont =cont +1;
            printf ("\n");
            printf ("Tabuado do %d:\n\n",cont);
            	for (i=1;i<=10;i++)
				{                
                printf ("%2d  X  %2d = %2d\n",i,cont,(i*cont));
                }
} 		while (cont <10);                
     system ("pause");
     return(0);
     }
