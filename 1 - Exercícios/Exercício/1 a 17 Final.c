
// Charles Mendes e Angelo Luiz Codognotto ;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Charles Mendes e Angelo Luiz Codognotto ;

void Menu (void);
void Um (void);
void Dois (void);
void Tres (void);
void Quatro (void);
void Cinco (void);
void Seis (void);
void Sete (void);
void Oito (void);
void Nove (void);
void Dez (void);
void Onze (void);
void Doze (void);
void Treze (void);
void Quatorze (void);
void Quinze (void);
void Dezesseis (void);
void Dezessete (void);
void Pausa();

int main(){
    Menu();
}

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

    case 3:
        Tres();
        break;

    case 4:
        Quatro();
        break;

    case 5:
        Cinco();
        break;

    case 6:
        Seis();
        break;

    case 7:
        Sete();
        break;

    case 8:
        Oito();
        break;

    case 9:
        Nove();
        break;

    case 10:
        Dez();
        break;

    case 11:
        Onze();
        break;

    case 12:
        Doze();
        break;

    case 13:
        Treze();
        break;

    case 14:
        Quatorze();
        break;

    case 15:
        Quinze();
        break;

    case 16:
        Dezesseis();
        break;

    case 17:
        Dezessete();
        break;

    default:
        printf("\n\n Valor inválido");
        system("pause");
        system("cls");
        }
    }while (opc != 0);
}

void Um(){
	float f , c ;
	f=0;
	scanf("%f",&f);
	c = (f-32)*5/9;
	printf("%.2f",c);
    Pausa();
}

void Dois(){
	float fa , c ;
	fa=0;
	printf("Digite um valor\n");
	scanf("%f",&fa);
	c = (fa-32)*5/9;
	printf("%.2f",c);
    Pausa();
}



void Tres(){
	float v,r,a,res;
	scanf("%f",&r);
	scanf("%f",&a);
	res = pow(r , 2);
	v=3.14*res*a;
	printf("valor : %f",v);
    Pausa();
}

void Quatro(){
float dist,temp,vm,lg;
	printf("Digite o tempo da viagem\n");
	scanf("%f",&temp);
	printf("Digite a velocidade media\n");
	scanf("%f",&vm);
	dist = (temp * vm);
	lg = (dist /12);
	printf("Velocidade Media: %.1f\n",vm);
	printf("tempo gasto : %.1f\n",temp);
	printf("distancia : %.1f\n",dist);
    printf("litros : %.1f\n",lg);
    Pausa();
}

void Cinco(){
	float  p,v,tp,t;
    scanf("%f",& v);
	scanf("%f",& t);
	scanf("%f",& tp);
    p = v+(((v * tp)/100)*t);

	printf("Valor de uma prestacao em atraso : %.1f",p);
    Pausa();
}

void Seis(){
	int a,b, c ;
	scanf("%d",& a);
	scanf("%d",& b);
	c = a;
	a = b;
	b = c;
	printf("%d\n",a);
	printf("%d\n",b);
	Pausa();
}

void Sete(){
	float v,c,l,a;

	scanf("%f",& c);
	scanf("%f",& a);
	scanf("%f",& l);

	v=c*a*l;
	printf("%f",v);
	Pausa();

}

void Oito (){
	int a,b;
	scanf("%d",&a);
	b=a^2;
	printf("%d",b);
	Pausa();
}

void Nove (){
	int n1,n2;
	float n3;
	printf("Digite um numero inteiro: \n");
	scanf("%d",&n1);
	printf("Digite um numero inteiro: \n");
	scanf("%d",&n2);
	n3 = (n1 - n2) ^ 2;
	printf("O resultado e´: ",n3);
	Pausa();
}

void Dez (){
	float r,d,cd;

	scanf("%f",& d);
	scanf("%f",& cd);
	r=d*cd;
	printf("%f",r);
	Pausa();

}

void Onze (){
	float r,d,cr;

	scanf("%f",& r);
	scanf("%f",& cr);
	d=r/cr;
	printf("%f",r);
    Pausa();

}

void Doze (){
	int a,b,c,d;

	scanf("%d",& a);
	scanf("%d",& b);
	scanf("%d",& c);

	d=(a^2)+(b^2)+(c^2);
	printf("%d",d);
	Pausa();
}

void Treze (){
	int a,b,c,d;

	scanf("%d",& a);
	scanf("%d",& b);
	scanf("%d",& c);
	d=a+b+c^2;
	printf("%d",d);
    Pausa();
}

void Quatorze (){
	int a,b,c,d,e,f;

	scanf("%d",& a);
	scanf("%d",& b);
	scanf("%d",& c);
	scanf("%d",& d);

	e = a*c;
	f = b+d;

	printf("O produto e´: %d\n , e A soma é %d ",e,f);
	Pausa();
}

void Quinze (){
	float  sm,p,ns;

	scanf("%f",&sm);
	scanf("%f",&p);

	ns = (sm*(p/100));
	printf("%f",ns);
	Pausa();

}

void Dezesseis (){
	float  a,r,resp;

	scanf("%f",&r);
	resp = (r * r);
	a = 3.14 * resp;
    printf("a circunferencia e´: %f",a);
    Pausa();
}

void Dezessete(){
/* Selo Friboi*/
		int A,B,C,votoValido,totalEleitor,votosnulos,votoBranco;
		float percTot_valido,percValido_A,percValido_B,percValido_C,percNulo,percBranco;

        printf ("Qtd de Votos Validos Para Candidato A\n");
    	scanf("%d",&A);
    	printf("Qtd de Votos Validos Para Candidato B\n");
    	scanf("%d",&B);
    	printf("Qtd de Votos Validos Para Candidato C\n");
    	scanf("%d",&C);
    	printf("Qtd de Votos Nulos\n");
    	scanf ("%d",votosnulos);
    	printf( "Qtd de Votos em Branco\n");
    	scanf ("%d",&votoBranco);

    	votoValido = A + B + C;
    	totalEleitor = votoValido + votosnulos + votoBranco;
    	percTot_valido = (votoValido * 100) / totalEleitor;
    	percValido_A = (A * 100) / totalEleitor;
    	percValido_B = (B * 100) / totalEleitor;
    	percValido_C = (C * 100) / totalEleitor;
    	percNulo = (votosnulos * 100) / totalEleitor;
    	percBranco = (votoBranco * 100) / totalEleitor;

        printf("Numero de eleitores %d\n",totalEleitor);
        printf("Votos validos %d\n",votoValido);
        printf("Votos nulos %d\n ",votosnulos);
        printf("Votos brancos %d\n ",votoBranco);
        printf("Percentual de votos validos %.1f\n",percTot_valido);
        printf("Percentual de votos validos de A %.1f\n",percValido_A);
        printf("Percentual de votos validos de B %.1f\n",percValido_B);
        printf("Percentual de votos validos de C %.1f\n",percValido_C);
        printf("Percentual nulo %.1f",percNulo);
        printf("Percentual de votos brancos %.1f",percBranco );
        Pausa();
	}

void Pausa(){
     printf("\n");
     system("pause");
     system("cls");
}
