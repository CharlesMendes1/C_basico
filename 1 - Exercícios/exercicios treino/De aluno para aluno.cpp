/*Aula 2 :
#include<stdio.h> - incluindo biblioteca no codigo
funnção principal : 
int main ()
{
	printf("x");
	return 0;
	
}
printf("x"); -- para escrever na tela*/




/*Aula 5 : Utilizando Variaveis

int maeIdade;
maeIdade = 50;

int maeIdade = 50 ;
*/


/*Aula 10 : Ciclo for 
loop - ele da volta na vida real 
#include <stdio.h>

int main()
{
	int contador;
	int numero = 1 ;
	
	for (contador = 1 ; contador < = 10; contador ++)
	{
	 printf("Brazil\n");
	 
	}
}*/



/*Aula 18 - numeros invertidos
link - https://www.youtube.com/watch?v=nipW-60w9KY&index=18&list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW&ab_channel=Dealunoparaaluno
*/



/*Aula 22 - 
Vetores
#include <stdio.h>

int main()
{
	int nota[5];
	
	nota[0] = 1;
	nota[1] = 2;
	nota[2] = 4;
	nota[3] = 6;
	nota[4] = 7;
}


*/

/*Se esta usando o Dev colocar system("pause")
 dentro de funções void*/
 
 



/*aula 23 -
#include <stdio.h>

int main(void) // criando vetor e executando o ciclo for
{
	
	int vetor[5],i;
	
	for(i = 0;i<5;i++)
	{
		printf("%i\n",vetor[i]);
	}
}

int main(void)
{
	
	int vetor[5],i;
	
	vetor[5] = {4,3,2,3} // atribuindo valores manualmente no vetor
	
	for(i = 0;i<5;i++)
	{
		printf("%i\n",vetor[i]);
	}
}
*/





/*
Aula 24 Manipulando Vetores 
https://www.youtube.com/watch?v=GmTpl5VRA4s&index=24&list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW&ab_channel=Dealunoparaaluno
*/

/*pulando aula 25 e 26*/





/*Aula 28 - Introdução Funções

#include <stdio.h>

int main() // função main
{
//declarando função void
	void imprimaMensagem(void); 
//chamando função
	imprimaMensagem(); 

	
	return 0;
}

void imprimaMensagem(void) // função void
{
	printf("teste.");
}

como regra de programação e para deixar o codigo 
mais limpo temos que declara-la primeiro no main e 
depois chama-la;*/





/*
Aula 29 Como Utilizar Funções
 
 #include <stdio.h>
 int (é atrelado ao return)- o que a funcao retorna
 main - nome da funcao
 (entre parentes) - o que minha funcao recebe de informacao

 int main(void)
 {
 	
 	return 0;
 }
float calcularAreaQuadrado (float x ,float y)
{
	
	return ;
}

*/











			/*treino 1 :*/
			/*#include<stdio.h>
			
			int main(void)
			{
			//declarando função para utiliza-lá
			float Banco(float divida, float saldo);
			//chamando função e passando valor
			float emprestimo = Banco(200.50, 500.15);
			
			printf(" O emprestimo é %f",emprestimo);
			
			return 0;
			}
			
			float Banco(float divida, float saldo)
			{
			float emprestimo = saldo - divida ;
			
			return emprestimo;
				
			}
				*/
			
			
			
			
			
			
			
			
			
			
			
			
			/*treinando 2 :
			#include<stdio.h>
			
			int main(void)
			{
			//declarando
			int carrodosovos(int valor, int quantidade, int saldo);
			//chamando e passando valor
			int falta = carrodosovos(2,10,5);
			printf("o valor que falta eh : %d",falta);
			return 0 ;
			
			}
			int carrodosovos(int valor, int quantidade, int saldo)
			{
				int preco,falta;
				preco = valor * quantidade ;
				falta = preco - saldo;
				
				return falta;
				
			}
			*/
			
			
			
			
			
			
			
			
			
			
			/*Treino 3  passando valor com menu 
			#include<stdio.h>
			
			int carrodosovos(int valor, int quantidade, int saldo)
			{
				int preco,falta;
				preco = valor * quantidade ;
				falta = preco - saldo;
				
				return falta;
				
			}
			void Menu()
			{
			int opc;
			
			printf("digite numero  [1] e [0] para Sair\n");
			scanf("%d",&opc); // opc é opção
				do
				{
					switch(opc)
					{
						case 1 :
						int carrodosovos(int valor, int quantidade, int saldo);
						break;
					
						
						default:
						printf("Numero invalido");
						Menu();
					}
				}
				while(opc != 0);
			}
			
			int main()
			{
			//declarando
			int carrodosovos(int valor, int quantidade, int saldo);
			//chamando e passando valor
			int falta = carrodosovos(2,10,5);
			
			printf("o valor que falta eh : %d",falta);
			
			//declarações
			void Menu();
			
			//chamando
			Menu();
			
			return 0 ;
			}*/
			
			









			/*treino 4 :
			
			#include<stdio.h>
			
			int main()
			{
			//declarar 
			int cucuru(int tata, int nata);
			//chamar e passar 
			int total = cucuru(7, 5);
			
			printf("O total eh : %d",total);
			return 0 ;
			}	
			
			int cucuru(int tata, int nata) 
			{
			 int total = tata + nata;
			 return total ;
			}
						
			*/
			
/*
 Aula 30 
Função e Variável Local Automática -

esplica que a variavel criada dentro de uma função 
ela sera uma variavel local automatica , pois ela é visivel 
apenas para a função que ela foi criada , e automatica por que cada vez que executamos 
o programa ela perde seu valor e se cri novamente 
*/



/*Aula 31 
Variável Local Estática

static int Nomedavarivel

ai cada vez que vocÊ chamar ela , ela não ira perder o seu valor anterior 
ela vai armazenando esse valor ate o final */



/*
Aula 32
Variável Global 
criase fora das funções 
Extrutura : int gNomedavariavel;
ela se comporta como varivel estatica 
*/



/*Aula 34
Funções que Chamam Outras Funções 
muito loko e dificil mas não empusivel
link : https://goo.gl/mAqDTG

*/

/*EXEMPLO FODA
#include<stdio.h>

int main(void)
{
	float somaDeDigitos(float num1, float num2);
	float a , b, soma ; 
	
	printf("digite dois numeros : ");
	scanf("%f",&a);
	scanf("%f",&b);
	
	soma = somaDeDigitos(a, b);
	
	printf("A soma dos digitos é %f",soma);
	
	
	return 0 ;
}

float somaDeDigitos(float num1, float num2)
{
	float valorAbsoluto (float x);
	
	if(num1 < 0 )
	{
	num1 = valorAbsoluto(num1);
	}
	
	if(num2 < 0 )
	{
	num2 = valorAbsoluto(num2);	
	}	
	
	return num1 + num2;
	
}

float valorAbsoluto (float x)
{
	
	return x * -1 ;
	
}
*/








/*

Teste #1

#include<stdio.h>

int main()
{
		
	int num1(int x);
	
	
	
	int numero,final;
	scanf("%d",&numero);
	

	final = num1(numero);
	
	printf("o valor do numero é : %d",final);
	
	return 0;
}


int num1(int x)
{
int numAgoraUm(int x2);
int oi;
	if(x != 1)
	{
		oi = numAgoraUm(x);
	}
return oi ;

}

int numAgoraUm(int x2)
{
	return x2 = 1;
}


*/








//Aula 30 







/*aula 47 - string
char palavra[6] = {'B','r','a','s','i','l'};
char palavra[7] = {"Brisil"};
char palavra[] = "Brasil";
char palavra[] = "Brasil\0";





Aula 48 - Declarando e iniciando string 
printf("%s",palavra); -- para ler string a palavra magica é o %s por que
se não teriamos quer criar um for todas as vezes para mostrar a string


char palavra[] = "Brasil"; --- melhor forma de colocar dados

Aula 49 --- Contar Carateres de uma string

*/


/*concatenar string = a juntar string (char)
caracteri nulo [\0], 
a bara ao contrario \  é especial e não conta como caractere*/






 
