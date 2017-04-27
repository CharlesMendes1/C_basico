#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
struct no {
	int info;
	struct no *esq;
	struct no *dir;
};

Arvore *inicializa(){
	return NULL;
}



Arvore *novo_no(int x){
	Arvore *novo = (Arvore*) malloc(sizeof(Arvore));
	novo->info = x;
	novo->dir = NULL;
	novo->esq = NULL;

	return novo;
}

//Percorre a arvore em ordem, do menor para o maior.
void imprimir(Arvore *raiz){
	if(raiz != NULL){
		imprimir(raiz->esq);
		printf("%d ",raiz->info);
		imprimir(raiz->dir);
	}
}

// Insere um novo elemento
Arvore *inserir(Arvore *raiz, int x){
	if(raiz == NULL){
		Arvore *novo = novo_no(x);
		raiz = novo;
	}
	else if (x < raiz->info)
		raiz->esq = inserir(raiz->esq, x);
	else
		raiz->dir = inserir(raiz->dir, x);
	return raiz;
}

Arvore * buscar(Arvore *raiz, int x){
	if(raiz == NULL) return NULL;
	else if (x < raiz->info)
		return buscar(raiz->esq, x);
	else if (x > raiz->info)
		return buscar(raiz->dir, x);
	else
		return raiz;
}

Arvore *remover(Arvore *raiz, int x){
	if(raiz == NULL)
		return NULL;
	else if (x < raiz->info)
		raiz->esq = remover(raiz->esq, x);
	else if (x > raiz->info)
		raiz->dir = remover(raiz->dir, x);
	else { //Achou!
		//O no a ser removido eh uma folha
		if(raiz->esq == NULL && raiz->dir == NULL){
			free(raiz);
			raiz = NULL;
		}
		// O no a ser removido tem apenas filho direito
		else if (raiz->esq == NULL){
			Arvore *tmp = raiz;
			raiz = raiz->dir;
			free(tmp);
		}
		// O no a ser removido tem apenas filho esquerdo
		else if(raiz->dir == NULL){
			Arvore *tmp = raiz;
			raiz = raiz->esq;
			free(tmp);
		}
		// O no a ser removido tem os dois filhos
		else{
			Arvore *antecessor = raiz->esq;
			//Encontra o no ancetessor do no a ser removido
			while(antecessor->dir != NULL)
				antecessor = antecessor->dir;

			raiz->info = antecessor->info;
			antecessor->info = x;
			raiz->esq = remover(raiz->esq, x);
		}
	}

	return raiz;
}
