#include<stdio.h>
int main (){
float n1,n2,n3,n4,med;
scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
med = (n1 + n2 + n3 + n4) / 4;
printf("%.2f\n",med);
if(med >= 7){
    printf("aprovado");
    }
else{
    printf("reprovado");
    }
return 0 ;
}
