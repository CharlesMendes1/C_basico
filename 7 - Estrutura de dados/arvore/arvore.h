typedef struct no Arvore;

Arvore *inicializa();

Arvore *novo_no(int x);

//Percorre a arvore em ordem, do menor para o maior.
void imprimir(Arvore *raiz);

// Insere um novo elemento
Arvore *inserir(Arvore *raiz, int x);

Arvore * buscar(Arvore *raiz, int x);

Arvore *remover(Arvore *raiz, int x);
