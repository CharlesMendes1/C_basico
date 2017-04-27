/*(Lab) Escreva uma fun¸c˜ao que receba um vetor V de inteiros com 10
elementos armazenados. A fun¸c˜ao deve retornar V com o valor de cada
posi¸c˜ao multiplicado por 2.*/
#include<stdio.h>

int multi(int V[],int x)
{
	int i=0;
	
	for(i=0;i<x;i++)
	{
		V[i] = V[i] * 2;
	}
	printf("Vetor ao quadrado\n");
	
	for(i=0;i<2;i++)
	{
		printf("Vetor[%d] e i[%d]\n",V[i],i);
	}
}


int main()
{
	int v[2],i;
	printf("digite valores do vetor\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&v[i]);
	}
	multi(v,2);
	
	printf("volto para main\n");
	for(i=0;i<2;i++)
	{
		printf("Vetor[%d] e i[%d]\n",v[i],i);
	}

	
}
