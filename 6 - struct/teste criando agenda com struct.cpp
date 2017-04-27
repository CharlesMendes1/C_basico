#include <stdio.h>
#include <string.h>

 
struct Agenda
{
	char Nome[100];
	char Email[100];

};


struct Endereco
{
	struct Agenda agenda[100];
	
	char Rua[100];
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
	struct Endereco endereco;
	int Telefone;
	int DDD;	
	
};
	
struct Aniversario
{
	struct Telefone telefone;
	int dia;
	int mes;
	int ano;
};


int main()
{
	struct Agenda agenda[100];
	struct Endereco endereco;
	struct Telefone telefone;

	// INSERE PESSOAS por ordem alfabetica
	int i,x;
	printf("Quantas pessoas vc deseja inserir\n");
	scanf("%d",&x);
	fflush(stdin);
	for(i=0;i<x;i++)
	{
	gets("agenda.Nome");
	gets("agenda.Email");
	gets("agenda.endereco.Rua");
	gets("telefone.Telefone");
	}
	
}
