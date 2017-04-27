#include <stdio.h>
main()
{
	int Num,Unidades,Dezenas,Inteiros;
	print("Digite um inteiro com dois números");
	scanf("%d",&Num);
	Unidades = Num % 10; 
	Dezenas = Num / 10;
	Inteiros = Unidades * 10 + Dezenas;
	printf(" O invertido de %d e' %d" , Num,Inteiros);
	system("PAUSE");
	return 0;
}
