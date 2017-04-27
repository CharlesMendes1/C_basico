#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,aux;
	printf("Digite numero de elementos do vetor : \n");
	scanf("%i",&n);
	aux = n * sizeof(int);
	printf("%d\n",aux);
	int v[aux],i=0;
	for(i=0;i<aux;i++)
		printf("vetor [%d] eh [%d]\n",i,v[i]);
	return 0;
	
/*	int x,*n;
	printf("Digite numero de elementos do vetor : \n");
	scanf("%d",&n);
	x=sizeof(*n);
	printf("%d\n",sizeof(x));
	int v[x] = {0},i=0;
	for(i=0;i<x;i++)
		printf("vetor [%d] eh [%d]\n",i,v[i]);
	return 0;*/
	
}
