void Menu(){
    int opc;
    do{
    printf ("Digite um numero entre [1 - a - 17] [0 - Sair]\n");
    scanf("%d",&opc);

    switch (opc) {
    case 1:
        Um();
        break;

    case 2:
        Dois();
        break;



    default:
        printf("\n\n Valor inválido");
        system("pause");
        system("cls");
        }
    }while (opc != 0);
}