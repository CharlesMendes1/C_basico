#include <stdio.h>
main(){
	int Num,Unidades,Dezenas,Invertido;
	print("Digite um inteiro com dois n�meros");
	scanf("%d",&Num);
	Unidades = Num % 10; 
	Dezenas = Num / 10;
	Invertido = Unidades * 10 + Dezenas;
	printf(" O invertido de %d e' %d" , Num,Invertido);
}
