#include <stdio.h>
#include <stdlib.h>
#include "listasimples.h"

struct lista{
	int info;
	struct lista *prox;
};

Lista * inserir(Lista *l, int i){
	Lista *novo = (Lista *) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;

	return novo;
}

void imprimir(Lista *l){
	// variavel auxiliar para percorrer a lista
	Lista *aux = l;
	while(aux != NULL){
		printf("%d ",aux->info);
		aux = aux->prox;
	}
}

int vazia(Lista *l){
	if(l == NULL)
		return 1;
	else
		return 0;
}

Lista *buscar (Lista *l, int v){
	Lista *aux = l;
	while(aux != NULL){
		if(aux->info == v)
			return aux;
		aux = aux->prox;
	}
	return NULL;
}

Lista *remover(Lista *l, int x){
	//guarda o elemento descoberto anteriormente
	Lista *anterior = NULL;
	Lista *aux = l;
	while(aux != NULL && aux->info != x){
		anterior = aux; //salva como anterior
		aux = aux->prox;
	}

	if(aux == NULL)//não encontrou
		return l;
	//o elemento a ser removido esta no inicio
	if(anterior == NULL)
		l = l->prox;
	 else//o elemento a ser removido esta no meio
		anterior->prox = aux->prox;

	free(aux);
	return l;
}

void liberar(Lista *l){
	Lista *aux = l;

	while(aux != NULL){//atravessa a lista
		Lista * temp = aux->prox;
		free(aux);
		aux = temp;
	}
}

Lista *insere_ordenado(Lista *l, int x){
	//cria o novo no
	Lista *novo = (Lista*) malloc(sizeof(Lista));
	novo->info = x;

	Lista *ant = NULL; //salva o no anterior
	Lista *aux = l;

	//procura a posicao que o novo elemento sera inserido
	while(aux != NULL && aux->info < x){
		ant = aux;
		aux = aux->prox;
	}
	if(ant == NULL){
		//insere o elemento na frente da lista
		novo->prox = l;
		l = novo;
	} else { //insere no meio
		novo->prox = ant->prox;
		ant->prox = novo;
	}
	return l;
}
