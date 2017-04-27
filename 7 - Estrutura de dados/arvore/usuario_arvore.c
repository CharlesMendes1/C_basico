#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main() {
	Arvore *arv = inicializa();

	arv = inserir(arv, 6);
	arv = inserir(arv, 2);
	arv = inserir(arv, 1);
	arv = inserir(arv, 4);
	arv = inserir(arv, 3);
	arv = inserir(arv, 8);

	printf("Conteudo da arvore: ");
	imprimir(arv);
	printf("\n");
	
	if(buscar(arv, 2))
		printf("Valor econtrado \n");
	else
		printf("Valor nao econtrado \n");

	arv = remover(arv, 9);

	imprimir(arv);
	printf("\n");
	return 0;
}
