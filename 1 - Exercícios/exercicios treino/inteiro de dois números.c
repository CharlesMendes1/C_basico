#include <stdio.h>
int main(){
	int Num,Unidades,Dezenas,Inteiros;
	printf("Digite um inteiro com dois números\n ");
	scanf("%d",&Num);
	Unidades = Num % 10;
	Dezenas = Num / 10;
	Inteiros = Unidades * 10 + Dezenas;
	printf(" O invertido de %d e' %d\n" ,Num,Inteiros);
	system("PAUSE");/* sd*/
	return 0;
}
