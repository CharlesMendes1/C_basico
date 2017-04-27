#include <stdio.h>
#include <string.h>

int i,j;
float caixa;
FILE * fp;
FILE * relatorio;

/* retorna tamanho do vetor */
int tamanhoVetor(char * nome){
	FILE * arquivo;
	char ch[255];
	arquivo = fopen(nome, "r"); 
	if(arquivo == NULL){
		printf("Erro, nao foi possivel abrir o arquivo\n");
		return 0;
	}
	i = 0;
	while( (fgets(ch,255,arquivo)) != NULL){
		i++;
	}
	return i;
	fclose(arquivo);
}
/* compra produto */
void acaoProduto(int opc, char * cor, char * tam, int qtd, float pre){
	if(opc == 0){
		FILE * data;
		data = fopen("database.txt","a+");
		fprintf(data,"%s\t%s\t%d\t%.2f\n",cor,tam,qtd,pre);
		fprintf(relatorio,"0 \n");
		fclose(data);
	}else{
		int size = tamanhoVetor("database.txt");
		char vCor[size][25],vTam[size][25];
		int vQtd[size];
		float vPre[size];
		int vendaCheck[2];
		
		FILE * data;
		data = fopen("database.txt","r");
			i=0;
			while(fscanf(data,"%s %s %d %f",vCor[i],vTam[i],&vQtd[i],&vPre[i]) != EOF) {
				i++;
			}
		fclose(data);
		for(i=0;i<size;i++){
			vendaCheck[0] = strcmp(vCor[i],cor);
			vendaCheck[1] = strcmp(vTam[i],tam);
			if(vendaCheck[0] == 0 && vendaCheck[1] == 0){
				if(qtd <= vQtd[i]){
					vQtd[i] -= qtd;
					caixa += qtd * pre;
					fclose(data);
					int rmv ;
					rmv = remove("database.txt");
					FILE * data;
					data = fopen("database.txt","w");
						for(i=0;i<size;i++){
							fprintf(data,"%s\t%s\t%d\t%.2f\n",vCor[i],vTam[i],vQtd[i],vPre[i]);
						}
					fclose(data);
						data = fopen("vendas.txt","a+");
						fprintf(data,"%s\t%s\t%d\t%.2f\n",cor,tam,qtd,pre);
						fprintf(relatorio,"0 \n");
					fclose(data);
				}
			}
		}
	}
}
/*apresenta produtos*/
void auxApresentar(char * nome){
	FILE * arquivo;
	char ch[255];
	arquivo = fopen(nome, "r"); 
	i = 0;
	while( (fgets(ch,255,arquivo)) != NULL){
		fprintf(relatorio,"%s",ch);
	}
	fprintf(relatorio,"0 \n");
}
	
int main(){
	int size = tamanhoVetor("dados.txt");
	char ope[size][25];
	char cor[size][25];
	char tam[size][25];
	int compare[6],qtd[size];
	float pre[size];

	fp = fopen("dados.txt", "r"); 
	if(fp == NULL){
		printf("Erro, nao foi possivel abrir o arquivo\n");
		return 0;
	}
	relatorio = fopen("relatorio.txt", "w+");
	FILE * data;
	data = fopen("database.txt","w+");
	fclose(data);
	data = fopen("vendas.txt","w+");
	fclose(data);
	
	i = 0;
	while( fscanf(fp,"%s",ope[0]) != EOF ){
		compare[0] = strcmp(ope[0],"-");
		compare[1] = strcmp(ope[0],"+");
		compare[6] = strcmp(ope[0],">");
		if(compare[0] == 0 || compare[1] == 0){
			i++;
			strcpy(ope[i],ope[0]);
			fscanf(fp,"%s %s %d %f",cor[i],tam[i],&qtd[i],&pre[i]);
			if(compare[0] == 0){
				acaoProduto(1,cor[i],tam[i],qtd[i],pre[i]);
			}else if(compare[1] == 0){
				acaoProduto(0,cor[i],tam[i],qtd[i],pre[i]);
			}
		}else if(compare[6] == 0){
			
			int size = tamanhoVetor("database.txt");
			char mCor[25],mTam[25];
			int mQtd;
			float mPre,maior;
			fscanf(fp,"%f",&maior);
			
			FILE * data;
				data = fopen("database.txt","r");
				while(fscanf(data,"%s %s %d %f",mCor,mTam,&mQtd,&mPre) != EOF) {
					if(mPre > maior){
						fprintf(relatorio,"%s %s %d %f \n",mCor,mTam,mQtd,mPre);
					}
				}
				fprintf(relatorio,"0 \n");
			fclose(data);
		
		}else{
			compare[2] = strcmp(ope[0],"/");
			compare[3] = strcmp(ope[0],"\\");
			compare[4] = strcmp(ope[0],"*");
			if(compare[2] == 0 || compare[3] == 0 || compare[4] == 0){
				if(compare[2] == 0){
					auxApresentar("database.txt");
				}else if(compare[3] == 0){
					auxApresentar("vendas.txt");
				}else if(compare[4] == 0){
					fprintf(relatorio,"%.2f \n",caixa);
					fprintf(relatorio,"0 \n");
				}
			}
		}
	}
	fclose(fp);
	fclose(relatorio);
	printf("Relatorio gerado com sucesso !\n");
	return 0;
}
