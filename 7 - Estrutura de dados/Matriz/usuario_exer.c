#include <stdio.h>
#include <stdlib.h>
#include "matriz_exer.h"
#include "matriz_exer.c"

int main(){
 Matriz *mat,*criado;
 int i,j,m,n; // m = linha  n = coluna
float x,y;
 
printf("Digite o tamanho da Linha\n");
scanf("%d",&m);
printf("Digite o tamanho da Coluna\n");
scanf("%d",&n);
	
criado=cria(n,m);

acessa(criado,i,j);

for (i=0;i<n;i++){
	for (j=0;j<m;j++){
		float numero = rand() % 10;
		insere(criado,i,j,numero);
	}
}

imprime(criado);
libera(criado);
return 0;
}



