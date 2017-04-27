/*Jogo
Menu : Armas - (primaria e segundaria) , vida , Kit de abilidade , Kit de defesa
Personagem ( Nome ,atack,defesa, Dinheiro , roupas(Kit de abilidade , Kit de defesa) )
Personagem contra
Ataques e defesas porcentagem de acertar ou errar


personagens : Dilmamax , Lulinha , Bolsomilico , AecioPó
*/
#include <stdio.h>
#include <locale.h>

int opc_arma;
int p_usuario;  // personagem escolhido pelo usuario
int chamaMenu;
int vida_p;
int kit_defesa;


vida_p1 = 90;
vida_p2 = 100;
vida_p3 = 95;
vida_p4 = 85;





void Menu();
void Personagens();
void Inventario();
void Loja();
/*
void Lutar();
void Troca_persona();
void Pausa();
*/
int arma







void Menu(){
int opc;

   do {
        printf("Digite um número de [1 a 5] para o Menu e [0] para Sair\n\n");
        printf("[1] - Personagens\n");
        printf("[2] - Inventario inicial");
        /*
        printf("[3] - Loja");
        printf("[4] - Lutar");
        printf("[5] - Trocar personagens");
        */
        printf("[0] - Sair");

        scanf("%d",&opc);

	    switch(opc){
	            case 1:
	                Personagens();
	                break;
	
	            /*case 2:
	                Inventario();
	                break;
	            case 3:
	                Loja();
	                break;
	            case 4:
	                Lutar();
	                break;
	            case 5:
	                Troca_persona();
	                break;
	            */
	            default:
	                printf("\nValor invalido\n");
	                system("pause");
	                system("cls");
	    }
   }while(opc != 0);

}




void Personagens(){
    int p_usuario,chamaMenu;


    do{

    printf("Escolha um personagem : \n\n");
    printf("[1] - DilMax Presidanta\n");
    printf("[2] - Lulinha Bi\n");
    printf("[3] - BolsoMilico\n");
    printf("[4] - Aecio Never\n");
    scanf("%d",&p_usuario); // personagem escolhido pelo usuario

        switch(p_usuario){
            case 1 :
                printf("Você escolheu a DilMax Presidanta\n");
                printf("Ela é a Virgem dos Guerreiros \n");
                printf("Sua vida inicial/maxima é de 90 HP\n");
                printf(" Ataque inicial tira 15 de vida \n");
                printf("Ataque da Mandioca) ela dropa indios com mandiocas mortiferas  \n");
                printf("(Defesa dos Ventos) tem um Estocador de Ventania para sua defesa \n");
                system("pause");
                printf("#### Aperte [Enter] para ir ao MENU ####\n");
                scanf("%d",&chamaMenu);
                    if (chamaMenu){
                        Menu();
                    }
                    

            case 2:
                printf("Você escolheu o Lulinha Bi\n");
                printf("Ele é Filho de um guerreiro que tem quatro dedos \n");
                printf("Sua vida inicial/maxima é de 100 de HP\n");
                printf("E seu ataque inicial tira 40 de vida \n");
                printf("(Attack da fazenda) ataque de vacas leiteiras sobre o inimigo \n");
                printf("(Defesa dos Bilhões) Parede de dinheiro para defesa\n");
                system("pause");
                printf("#### Aperte [Enter] para ir ao MENU ####\n");
                scanf("%d",&chamaMenu);
                    if (chamaMenu){
                        Menu();
                    }


            case 3:
                printf("Você escolheu o BolsonaraMilico\n");
                printf("Assasina da Mentira cristã no mundo\n");
                printf("Sua vida inicial/maxima é de 95 de HP\n");
                printf("E seu ataque inicial tira 35 de vida \n");
                printf("(Attack dos Milico) ataqua com toneladas de misseis sobre o inimigo \n");
                printf("(Defesa dos Milico) Usar partido comuna como escudo \n");
                system("pause");
                printf("#### Aperte [Enter] para ir ao MENU ####\n");
                scanf("%d",&chamaMenu);
                    if (chamaMenu){
                        Menu();
                    }
                    
                    
            case 4 :
                printf("Você escolheu o Aecio Never\n");
                printf("chamado de : O Matador do pó\n");
                printf("Sua vida inicial/maxima é de 85 de HP\n");
                printf("E seu ataque inicial tira 45 de vida \n");
                printf("(Attack do Viciados) ataqua com toneladas de Cocaina e maconha sobre seus inimigo \n");
                printf("(Defesa do Cherador) Usar os viciados anonimos como escudo \n");
                 system("pause");
                printf("#### Aperte [Enter] para ir ao MENU ####\n");
                scanf("%d",&chamaMenu);
                    if (chamaMenu){
                        Menu();
                    }
                    
                    
            default:
                printf("\nValor invalido\n");
                system("pause");
                system("cls");
                Personagem();
        }

    }while(p_usuario != 0);
    return p_usuario;
}


   


void Inventario (int p_usuario){
    //int p_usuario = Personagens(int p_usuario);

   if(p_usuario = 1){
		printf("Personagem = DilMax Presidanta\n");
		printf("Vida = %d\n",vida_p);
		printf("Dinheiro = %d\n",dinheiro);
		printf("Quantas vezes lutou = %d",lut);
		printf("Vitorias =  ");
		printf("Derrotas = ");
		printf("Armas = ");
		printf("Kit de defesa = ");
	
   }
      if(p_usuario = 2){
		printf("Personagem = Lulinha Bi\n");
		printf("Vida = %d\n",vida_p);
		printf("Dinheiro = %d\n",dinheiro);
		printf("Quantas vezes lutou = %d\n",lut);
		printf("Vitorias =  \n");
		printf("Derrotas = ");
		printf("Armas = %d\n",);
		printf("Kit de defesa = ");
	
   }
      if(p_usuario = 3){
		printf("Personagem = BolsonaraMilico\n");
		printf("Vida = %d\n",vida_p);
		printf("Dinheiro = %d\n",dinheiro);
		printf("Quantas vezes lutou = %d",lut);
		printf("Vitorias =  ");
		printf("Derrotas = ");
		printf("Armas = ");
		printf("Kit de defesa = ");
	
   }
      if(p_usuario = 4){
		printf("Personagem = Aecio Never\n");
		printf("Vida = %d\n",vida_p);
		printf("Dinheiro = %d\n",dinheiro);
		printf("Quantas vezes lutou = %d",lut);
		printf("Vitorias =  ");
		printf("Derrotas = ");
		printf("Armas = ");
		printf("Kit de defesa = ");
	
   }
   else{
   	Personagem();
   }
   
   
   
   
   
   
   
   
   
   
   /* do{

    printf("[1] - DilMax Presidanta\n");
    printf("[2] - Lulinha Bi\n");
    printf("[3] - BolsoMilico\n");
    printf("[4] - AecioPó\n");
    scanf("%d",&p_usuario); // personagem escolhido pelo usuario

        switch(p_usuario){
            case 1 :

                loja()

            case 2:

            case 3:

            case 4 :

            default:

        }

    }while(p_usuario != 0);
    return p_usuario;
   */
}

void Loja(){
int opc_arma,kit_defesa;

printf("\nEscolha sua Arma [Ataque] \n");
scanf("%d",&opc_arma);

printf( "Arma 1\n");
printf( "AWP- Sniper \n");

printf("__________________________@@@_________________________\n");
printf("__________________________@@@_________________________\n");
printf("@______________________@@@@@@@@_______________________\n");
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@________\n");
printf("_________________________@@@@@  @@@@@@@@@@@ @@________\n");
printf("_____________________________@@@@@@@@@@@@@  @@________\n");
printf("________________________________________@@@@@@________\n");



printf( "Arma 2\n");
printf("\nPistola Glock\n");

printf("________@@@@______________________________________\n");
printf("________@@@@@@@@@@@@@@@         @@@@@@@@@@________\n");
printf("________@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@________\n");
printf("________@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@________\n");
printf("___________________________@      @@@@@@@@________\n");
printf("___________________________@@@@@@@@@@@@@@@________\n");
printf("__________________________________@@@@@@@@________\n");
printf("__________________________________@@@@@@@@________\n");



printf( "Arma 3\n");
printf("\nEspada\n");

printf("_______________O____________________________\n");
printf("_______________|____________________________\n");
printf("________0{XXXX}+>>>>>>>>>>>>>>>>>>>>>_______\n");
printf("_______________|____________________________\n");
printf("_______________O____________________________\n");




printf( "Arma 4\n");
printf("\nEspada Minecraft\n");

printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+++++++++++++|@@@|++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+__++++++++++|@@@|++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("|  |_________|@@@|```````````````````````````````````````````````\++++++\n");
printf("|  |         |@@@|________________________________________________\+++++\n");
printf("|  |_________|@@@|                                                /+++++\n");
printf("|__|         |@@@|_______________________________________________/++++++\n");
printf("+++++++++++++|@@@|++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+++++++++++++|@@@|++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");


printf( "Arma 5\n");
printf("\nGarrucha\n");
garrucha

printf("______________________________________________@@_______________________\n");
printf("@@___________________________________________@@@_______________________\n");
printf("@@@_________________________________________@@@@_______________________\n");
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@___________________\n");
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@___________________\n");
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@___________\n");
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@___________\n");
printf("@@__________________________@@@@@@@@@@@@@@@@@@@@@@@@_____@@@___________\n");
printf("____________________________@@@@@@@@@@@@@@@@@@@@@@________@@___________\n");
printf("____________________________@@@   @@ @@@@@@@@@@@_______________________\n");
printf("____________________________@@@   @@ @@@@@@@@@@@_______________________\n");
printf("____________________________@@@      @@@@@@@@@@@_______________________\n");
printf("____________________________@@@@@@@@@@@@@@@@@@@@_______________________\n");
printf("________________________________________@@@@@@@@_______________________\n");
printf("________________________________________@@@@@@@@_______________________\n");
printf("________________________________________@@@@@@@@_______________________\n");
printf("________________________________________@@@@@@@@_______________________\n");

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
printf("\nEscolha seu Kit de defesa [Defesa] \n");


/*p1
	inicial defesa dos ventos (estocador de vento)

=

redemuinho de vento
circulo de tornado protetor
onda de vento atomico
rajada de ventania



p2
Defesa dos Bilhões) Parede de dinheiro para defesa

=

envocar judeus para proteção
envocar massons para ajudar
envocar adm do capiroto
envocar o mago sinegador de impostos

p3
Defesa dos Milico) Usar partido comuna como escudo

dropar soldados mortos da 1°guerra mundial 
dropar soldados mortos da 2° guerra mundial
dropar drones assasinos com manuseio altomatico
dropar robos matadores


p4
Defesa do Cherador) Usar os viciados anonimos como escudo

usar de escudo as ong's que ajudam os viciados
usar de escudos todos os viciados em pornografia do mundo
usar os mendigos de escudos 
usar os cachorros abondonandos na rua de escudo

*/


}



int main (){
Menu();
setlocale(LC_ALL,"Portuguese");
            }
