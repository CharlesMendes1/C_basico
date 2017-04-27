#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int X,uni,dez,cent,inver;
	printf("Digite um valor com três números : ");
	scanf("%d",& X);
	uni = X % 10;
	dez = X%100/10;
	cent = X/1;
	inver = uni*100 + dez*10 + cent;
	printf ("Invertendo-se %d obtemos %d\n",X,inver);
	return 0;
}
