#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Declarações
int Menu();
void Primeiro_Nome();
void Mes_Aniversario();
void Dia_Mes();
void Inserir_Pessoa();
void Retira_Pessoa();
void Agenda_Pessoa();

int a,x;

struct Observacao
{
	char obs[100];
};

struct Endereco
{	char Rua[100];
	int Numero;
	char Complemento[100];
	char Bairro[100];
	int cep;
	char cidade[100];
	char estado[100];
	char pais[100];
};

struct Telefone
{
	int Telefone,DDD;
};
	
struct Aniversario
{	
	int dia,mes,ano;
};

struct Agenda
{
	char Nome[100];
	char Email[100];
	struct Endereco end;
	struct Telefone tel;
	struct Aniversario aniver;
	struct Observacao Obs;
};

struct Agenda pessoa[100];



int Menu()
{
	int opc;
	printf("__________Inserir Pessoa___________[1]\n");
	printf("_____Busca pelo Primeiro Nome______[2]\n");
	printf("___Busca pelo Mês de aniversário___[3]\n");
	printf("_Busca por Dia e Mês do aniversário[4]\n");	
	printf("__________Excluir Pessoa___________[5]\n");
	printf("__________Consultar Agenda_________[6]\n");
	scanf("%d",&opc);
	switch(opc)
	{ 
		case 0 :
		
			break;
		case 1 :
			Inserir_Pessoa();
			break;
		case 2 :
		 	Primeiro_Nome();
			break;
		case 3 :
			Mes_Aniversario();
			break;
		case 4 :
			Dia_Mes();
			break;
		case 5 :
			Retira_Pessoa();
			break;
		case 6 :
			Agenda_Pessoa();
			break;
		default :
			printf("Escolha invalida");
			system("pause");
			system("cls");
			Menu();
	}
	return 0;
}


void Inserir_Pessoa()
{
	// INSERE PESSOAS por ordem alfabetica
	int i;
	i = 0;
	system("cls");
	printf("----------------------Agenda------------------\n");
	printf("Digite um nome de uma pessoa:\n");
	fflush(stdin);
	gets(pessoa[a].Nome);
	printf(" %s \n %d \n",pessoa[i].Nome,i);
	
	for(i=0;i<a;i++)
	{
		if(strcmp(pessoa[a].Nome,pessoa[i].Nome == 0 ) )
		{	
			printf("Pessoa ja cadastrada\n");
			system("pause");
			system("cls");
			Menu();
		}
	}
	printf("Digite um Email:\n");
	fflush(stdin);
	gets(pessoa[a].Email);

	system("cls");
	
	printf("-----------------Endereço-----------------\n");
	
	printf("Bairro:\n");
	fflush(stdin);
	gets(pessoa[a].end.Bairro);
	
	printf("Rua:\n");
	fflush(stdin);
	gets(pessoa[a].end.Rua);
	
	printf("Numero:\n");
	fflush(stdin);
	scanf("%d",&pessoa[a].end.Numero);
	
	printf("Complemento:\n");
	fflush(stdin);
	gets(pessoa[a].end.Complemento);
	
	printf("CEP\n");
	fflush(stdin);
	scanf("%d",&pessoa[a].end.cep);
	
	printf("Cidade:\n");
	fflush(stdin);
	gets(pessoa[a].end.cidade);
	
	printf("Estado:\n");
	fflush(stdin);
	gets(pessoa[a].end.estado);
	
	printf("País:\n");
	fflush(stdin);
	gets(pessoa[a].end.pais);
	

	system("cls");
	
	printf("Telefone:\n");
	printf("digite o DDD do seu telefone\n");
	scanf("%d",&pessoa[a].tel.DDD);
	printf("Digite o Telefone \n");
	scanf("%d",&pessoa[a].tel.Telefone);
	

	system("cls");	
	
	
	printf("\nAniversário:\n");
	printf("Digite o dia \n");
	scanf("%d",&pessoa[a].aniver.dia);
	printf("Digite o Mês \n");
	scanf("%d",&pessoa[a].aniver.mes);
	printf("Digite o Ano \n");
	scanf("%d",&pessoa[a].aniver.ano);

	
	system("cls");	
	
	printf("Observação\n");
	fflush(stdin);
	gets(pessoa[a].Obs.obs);
	
	system("cls");	
	
	a++;
	system("pause");
	system("cls");
	Menu();
}

void Primeiro_Nome()
{
	//busca o primeiro nome
}

void Mes_Aniversario()
{
	// BUSCA POR MES
}

void Dia_Mes()
{
	//BUSCA POR DIA E MES
}

void Retira_Pessoa()
{
	// RETIRA PESSOA
}

void Agenda_Pessoa()
{
	// nome,tel,email;
	//todos os dados;
}

int main()
{
	Menu();
	int a = 0;
	return 0;
}
