#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

//Insere um elemento i na lista
Lista *inserir(Lista *l, int i);
//Exibe todos os elementos da lista na saida padrao
void imprimir(Lista *l);
// retorna 1 se a lista esta vazia e 0 caso contrario
int vazia(Lista *l);
//procura por um dado elemento na lista
//devolve NULL se o elemento nao foi encontrado
Lista *buscar(Lista *l, int v);
//retira um elemento se ele for encontrado
Lista *remover(Lista *l, int x);
//Desaloca o espaço ocupado pela lista
void liberar(Lista *l);
//cria e inicializa um no da lista
//insere elementos em ordem
Lista *insere_ordenado(Lista *l, int x);
