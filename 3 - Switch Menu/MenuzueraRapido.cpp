#include <stdio.h>

void Um()
{
	printf("estou escrevendo UM aqui\n");
}
void dois()
{
	printf("estou escrevendo Dois aqui\n");
}

void tres()
{
	printf("estou escrevendo Tres aqui\n");
}

void Menu()
{
int opc;
	do
	{
		printf("Digite um numero do menu de [1] ate [3] e [0] para Sair\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1 :
				Um();
				break;
			case 2 :
				dois();
				break;
			
			case 3 :
				tres();
				break;
			
			default :
				printf("Valor invalido");
		}
	
	}
	while(opc != 0);
}

int main ()
{
Menu();	
}
