#include <stdio.h>
int main (){
int temp,vel,dis;
float litros;
printf("tempo da viagem em horas\n");
scanf("%d",&temp);
printf("velocidade media da viagem\n");
scanf("%d",&vel);
dis = temp * vel;
litros = dis/12;
printf("velocidade media : %d \n, tempo : %d \n, distancia : %d \n ,  litros utilizados : %.1f \n ",vel,temp,dis,litros);
return 0 ;
}
