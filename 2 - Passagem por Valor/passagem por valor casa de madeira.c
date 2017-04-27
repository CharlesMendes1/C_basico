#include <stdio.h>



void Menu(){

    int opc;
    do{
    printf ("Digite um numero entre [1 - a - 2] [0 - Sair]\n");
    scanf("%d",&opc);

    switch (opc) {
    case 1:
        Casademadeira_agora();
        break;

    case 2:
       Casademadeira_futuro();
        break;

    default:
        printf("\n\n Valor inválido");
        system("pause");
        system("cls");
        }
    }while (opc != 0);
}


int Casademadeira_agora(int total){
	int material,madeira,caboselectros,cerramica,total=0;
	printf("valores dos materiais\n\n");
	
	printf("Material:\n");
	scanf("%d",& material);
	
	printf("Madeira:\n");
	scanf("%d",& madeira);
	
	printf("cabos eletricos\n");                    
	scanf("%d",& caboselectros);
	
	printf("cerramica:\n");
	scanf("%d",& cerramica);
	
	total = madeira + material + caboselectros + cerramica + 1000 ;
	
	printf("valor do total %d\n",total);
	
	return total;
	
}

int Casademadeira_futuro(){
	//int total();
	int total2;
	int fut=1000;
	printf("valor do total no futuro : %d \n",total);
	total2 = total - fut;
	printf("valor do total no futuro : %d \n",total2);
	return 0;
}

int main(){
	Menu();
	getchar();
	getchar();
	return 0 ;
}
