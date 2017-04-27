#include <stdio.h>
#include <math.h>

void Entrada (int a[], int tam);
void Saida (int a[], int tam);
void Inverte(int a[ ], int tam);
void Quadrado(int a[ ], int tam);
void Impares(int a[ ], int tam);
void Pares(int a[ ], int tam);

void Entrada (int a[], int tam){
	int i;
	for (i = 0; i < tam; i++){
		printf("Digite o valor [%d]: ",i);
		scanf ("%d",&a[i]);
	}
}

void Saida (int a[], int tam){
	int i;
	for (i = 0; i < tam; i++){
		printf("Posição [%d]: %d \n",i,a[i]);
	}
}

void Inverte (int a[], int tam){
	int i;
	for (i = 0; i < tam; i++){
		printf("Posição Invertida [%d]: %d \n",i,a[(tam - 1) - i]);
	}
}

void Quadrado (int a[], int tam){
	int i,b;
	for (i = 0; i < tam; i++){
		b = pow(a[i],2);
		printf("Posição ao Quadrado [%d]: %d \n",i,b);
	}
}

void Impares (int a[], int tam){
	int i;
	for (i = 0; i < tam; i++){
		if (a[i] % 2 != 0){
			printf("Impar [%d]: %d \n",i,a[i]);
		}
	}
}

void Pares (int a[], int tam){
	int i;
	for (i = 0; i < tam; i= i + 2){
			printf("Posição par [%d]: %d \n",i,a[i]);
	}
}

int main(){
	int a[5],i;
	Entrada(a,5);
	Saida(a,5);
	Inverte(a,5);
	Quadrado(a,5);
	Impares(a,5);
	Pares(a,5);
	return 0;
}
