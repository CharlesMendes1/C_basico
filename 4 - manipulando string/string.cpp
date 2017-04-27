#include<stdio.h>
#include <stdlib.h>
#include <string.h>


//declarando
void Um(int opc);
void Dois(char mes[20]);
void Menu();

//dando valor
int a = 5;




void Um(int opc)
{

	switch(opc)
		{
			case 1 :
			printf("Janeiro");
			break;
			
			case 2 :
			printf("Fevereiro");
			break;
			
			case 3 :
			printf("Março");
			break;
			
			case 4 :
			printf("Abril");
			break;
			
			case 5 :
			printf("Maio\n");
			break;
			
			case 6 :
			printf("Junho");
			break;
			
			case 7 :
			printf("Julho");
			break;
			
			case 8 :
			printf("Agosto");
			break;
			
			case 9 :
			printf("Setembro");
			break;
			
			case 10 :
			printf("Outubro");
			break;
			
			case 11 :
			printf("Novembro");
			break;
			
			case 12 :
			printf("Dezembro");
			break;
			
			default :
			Menu();
			system("pause");
			system("cls");
			break;
		}
	
	
}


void Dois(char mes[20])
{
	if(strcmp(mes,"Janeiro")== 0)
	{
		printf("1 - Janeiro\n");
	}
	
	if(strcmp(mes,"Fevereiro")== 0)
	{
		printf("2 - Fevereiro\n");
	}
	
	if(strcmp(mes,"Março")== 0)
	{
		printf("3 - Março\n");
	}
	
	if(strcmp(mes,"Abril")== 0)
	{
		printf("4 - Abril\n");
	}
	
	if(strcmp(mes,"Maio")== 0)
	{
		printf("5 - Maio\n");
	}
	
	if(strcmp(mes,"Junho")== 0)
	{
		printf("6 - Junho\n");
	}
	
	if(strcmp(mes,"Julho")== 0)
	{
		printf("7 - Julho\n");
	}
	
	if(strcmp(mes,"Agosto")== 0)
	{
		printf("8 - Agosto\n");
	}
	
	if(strcmp(mes,"Setembro")== 0)
	{
		printf("9 - Setembro\n");
	}
	
	if(strcmp(mes,"Outubro")== 0)
	{
		printf("10 - Outubro\n");
	}
	
	if(strcmp(mes,"Novembro")== 0)
	{
		printf("11 - Novembro\n");
	}
	
	if(strcmp(mes,"Dezembro")== 0)
	{
		printf("12 - Dezembro");
	}
	
	system("pause");
	system("cls");	
	Menu();
	
}

void Tres()
{
char pl1[10],pl2[10],pl3[10],pl4[10],pl5[40];
	
	printf("Digite uma palavra\n");
	fflush(stdin);
	gets(pl1);
	
	printf("Digite uma palavra\n");
	gets(pl2);
	
	printf("Digite uma palavra\n");
	gets(pl3);
	
	printf("Digite uma palavra\n");
	gets(pl4);

	strcat(pl5,pl1);
	strcat(pl5,pl2);
	strcat(pl5,pl3);
	strcat(pl5,pl4);

printf("Todas as palavras = %s\n",pl5);
system("pause");
system("cls");
Menu();

}


void Quatro()
{
	char str[20],str2[20];
	int i , size ; 
	
	printf("Digite uma palavra\n");
	fflush(stdin);
	gets(str);
	
	size = strlen(str);
	
	for (i = 0;str[i];i++)
	{
		 str2[i] = str[size-i-1];
	}
	str[i] = '\0';
	printf("String inversa: %s \n",str2);
	
	system("pause");
	system("cls");
	Menu();
}

void Cinco()
{
	char str[20],str2[20];
	int i,size ; 
	
	printf("Difite uma palavra\n");
	fflush(stdin);
	gets(str);
	size = strlen(str);
	
	for (i = 0;str[i];i++)
	{
		 str2[i] = str[size-i-1];
	}
	
	str[i] = '\0';
	
	if(strcmp(str,str2)==1)
	{
		printf("Não é polindrome");
	}
	else
	{
		printf("eh polindrome");
		printf("palavras invertidas = \n %s",str2);
	}
	system("pause");
	system("cls");
	Menu();
	
	
}


void Menu()
{
	int opc;
		
	printf("Digite de [1] ate [5] e [0] para Sair\n");
	scanf("%d",&opc);	
		
		switch(opc)
		{
			case 1 :
				Um(a);
			break;
			
			case 2 :
				Dois("Agosto");
			break;
			
			case 3 :
				Tres();
			break;
			
			case 4 :
				Quatro();
			break;
			
			case 5 :
				Cinco();
			break;
			
			default : 
			printf("Valor invalido");
			system("pause");
			system("cls");
			break;
			
		}
	
}




int main()
{
Menu();
return (0) ;
}
