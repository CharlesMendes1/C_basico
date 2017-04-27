#include <stdio.h>
int main(){
	int res,A,cont;
	printf("Número da tabuada");
	scanf("%d",&A);
	cont = 1; 
	while (cont <= 10)
	{
		res = A*cont;
		cont = cont + 1;
		printf("%d\n",res);
	}
	return 0 ;
}
