#include"listasimples.h"
int main(void) {
	Lista *l = NULL;
	l = inserir(l,10);
	l = inserir(l,30);
	l = inserir(l,140);
	l = remover(l, 10);
	l = remover(l, 30);
	l = insere_ordenado(l,4);
	l = insere_ordenado(l,2);
	l = insere_ordenado(l,78);
	imprimir(l);

	if(buscar(l,140) != NULL)
		printf("\nValor encontrado na lista\n");
	
	imprimir(l);
	liberar(l);
	return 0;
}
