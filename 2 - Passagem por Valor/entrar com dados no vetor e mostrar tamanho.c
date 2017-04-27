#include<stdio.h>
#include<stdlib.h>
void Menu();
int TamanhoVetor();
int Entradavetor();


void Menu(){
    int opc;
    do{
    printf ("Digite um numero entre [1 - a - 2] [0 - Sair]\n");
    scanf("%d",&opc);

    switch (opc) {
    case 1:
        TamanhoVetor();
        break;

    case 2:
       EntradaVetor();
        break;

    default:
        printf("\n\n Valor inválido");
        system("pause");
        system("cls");
        }
    }while (opc != 0);
}




int TamanhoVetor(){
	int tam;
	printf ("Digite um tamanho de vetor: ");
	scanf("%d",&tam);
	return tam;
	
}

int EntradaVetor(int tam){
	int i;
		for(i=0;i<tam;i++){
			printf("Vetor %d ",i);
			scanf("%d",&i);
		}
}

int main(){
	
	Menu();
	getchar();
	getchar();
	return 0 ;
}
