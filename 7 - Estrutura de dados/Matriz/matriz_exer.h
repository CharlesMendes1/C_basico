typedef struct matriz Matriz;

/* Funcao cria: Aloca e retorna uma matriz m x n */
Matriz *cria (int m,int n); //->

/* Funcao libera : Libera a memoria de uma matriz
previamente criada .*/
void libera (Matriz *mat);

/* Funcao acessa : Retorna o valor do elemento da linha i
e coluna j */
float acessa(Matriz *mat,int i,int j);

/* Funcao insere : Atribui o valor dado ao elemento da
linha i e coluna j */
void insere(Matriz *mat,int i,int j,float v); // ->

/* Funcao linhas : Retorna o numero de linhas da matriz */
int linhas(Matriz *mat);
int colunas(Matriz *mat);

/* Função que retorna Matriz */
void imprime(Matriz *mat);  //->
