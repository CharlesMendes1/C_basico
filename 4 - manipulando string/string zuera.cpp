#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	char x[20],aux[20],y[20];
	int tam;
	
	printf("Digite algo\n");
	fflush(stdin);
	gets(x);
	
	strcpy(aux,x);
	
	if((strcmp(x,aux)==0))
	{
		printf("igual");
	}
	else{
			printf("desigual");
		}
		
	strcat(y,x);
	
	tam=strlen(y);
	
	printf("tamanho %d",tam);
	return 0;

	

}
