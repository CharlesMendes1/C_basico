#include <stdio.h>


void Soma()
{
//int ma,mb,tam;
int lg,cg,tam;//lg = linha_geral cg= coluna_geral da matrix

printf("escolha tamanho da  matrix: \n");
scanf("%d",&lg);
printf("escolha tamanho da  matrix: \n");
scanf("%d",&cg);


tam = (lg+cg)-lg;


/*
scanf("%d",&mb);
  tam = ma;
*/

if(lg = cg){
	int A[tam][tam],B[tam][tam],i,j;
	
	for(i=0;i<tam;i++)
	for(j=0;j<tam;j++)
	scanf("%d",&A[i][j]);
		
	for(j=0;j<tam;j++)
	for(i=0;i<tam;i++)
	scanf("%d",&B[i][j]);
	
	for(i=0;i<tam;i++)
	for(j=0;j<tam;j++)
	printf("A soma é : %d\n",(A[i][j]+B[i][j]));
}
	
else{
	printf("numero da matrix desigual , Operação negada");		
	}
 
}
	

void Multi()
{
int ma,mb,tam;
printf("escolha tamanho da matrix: \n");
scanf("%d",&ma);
printf("escolha tamanho da matrix: \n");
scanf("%d",&mb);
tam = (ma + mb)-ma ;

	if(ma = mb){
	int A[ma][ma],B[mb][mb],i,j;
	for(i=0;i<tam;i++)
	for(j=0;j<tam;j++)
	scanf("%d",&A[i][j]);
		
	for(i=0;i<tam;i++)
	for(j=0;j<tam;j++)
	scanf("%d",&B[i][j]);
	
	for(i=0;i<tam;i++)
	for(j=0;j<tam;j++)
	printf("A soma é : %d\n",(A[i][j]*B[i][j]));
	}else{
		printf("Matrizes de tamanho diferente operação negada");
		}
	}
	
void Ordem2()
{
int ma,mb,tam;
printf("escolha tamanho da  matrix: \n");
scanf("%d",&ma);
printf("escolha tamanho da  matrix: \n");
scanf("%d",&mb);

tam = (ma+mb)-ma;

if((ma = 2) && (mb = 2)){
	int A[ma][ma],B[mb][mb],i,j,det;//calculo determinante da ordem 2 
		for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
		scanf("%d",&A[i][j]);
		
		for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
		scanf("%d",&B[i][j]);
	
		for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
		det = ((A[0][0]*A[1][1]- A[0][1]*A[1][0] + B[0][0]*B[1][1]- B[0][1]*B[1][0]));
		printf("A soma é : %d\n",det);
	}else{
		printf("Matrizes que não é da Ordem 2, operaçao negada");
		}
	}

void Ordem3()
{
int ma,mb,tam;

printf("escolha tamanho da  matrix: \n");
scanf("%d",&ma);
printf("escolha tamanho da  matrix: \n");
scanf("%d",&mb);

tam = (ma+mb)-ma;

if((ma = 3) && (mb = 3)){
	int A[ma][ma],B[mb][mb],i,j,det;//calculo determinante da ordem 3
		for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
		scanf("%d",&A[i][j]);
		
		for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
		scanf("%d",&B[i][j]);
	
		for(i=0;i<tam;i++)
		for(j=0;j<tam;j++)
		det = ((A[0][0] * A[1][1]* A[2][2] - A[0][1] * A[1][2] * A[2][0] - A[0][2] * A[1][0] * A[2][1] - A[0][2] * A[1][1] * A[2][0] - A[0][0] * A[1][2] *A[2][1] - A[0][1] * A[1][0] * A[2][2] + B[0][0] * B[1][1]* B[2][2] - B[0][1] * B[1][2] * B[2][0] - B[0][2] * B[1][0] * B[2][1] - B[0][2] * B[1][1] * B[2][0] - B[0][0] * B[1][2] *B[2][1] - B[0][1] * B[1][0] * B[2][2]));
		printf("A soma é : %d\n",det);
		
	}else{
		printf("Matrizes que não é da Ordem 2, operaçao negada");
		}
	}

void Menu(){
    int opc;
    do{
    printf ("Digite um numero entre [1 - a - 4] [0 - Sair]\n");
    scanf("%d",&opc);

    switch (opc) {
    case 1:
        Soma();
        break;

  	case 2:
        Multi();
        break;

    case 3:
        Ordem2();
        break;
	
     case 4:
        Ordem3();
        break;
		
	default:
        printf("\n\n Valor inválido");
        break;
        }
    }while (opc != 0);
}




int main()
{ 
	Menu();
}
