#include <stdio.h>
int square (int x) /* Calcula o quadrado de x */
{
printf ("O quadrado e %d\n",(x*x));
return(0);
}


int deus(int alfa,int omega)
{
printf("Os deuses duelaram e perderam sua força: %d \n\n",alfa/omega);
return 0;	
}

int main ()
{
int num,deus_1=50000000,deus_2=10000;
printf ("Entre com um numero: \n\n");
scanf ("%d",&num);
square(num);
deus(deus_1,deus_2);
return(0);
}
