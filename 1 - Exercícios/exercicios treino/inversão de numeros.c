#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"Portuguese");
	int Num,Unidades,Dezenas,Invertido;
	printf("Digite um inteiro com dois números: ");
	scanf("%d",&Num);
	Unidades = Num % 10;
	Dezenas = Num / 10;
	Invertido = Unidades * 10 + Dezenas;
	printf("O invertido de %d é %d" ,Num,Invertido);
}
