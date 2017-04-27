#include <stdio.h>
#include<conio.h>

int soma (int A , int B){
    A = A * 2 ;
    printf("\n (A) da soma : %d",A);
    return (A + B);
}
int main (){
int A , B , C ;
A = 3 , B = 5 ;
C = soma (A,B);
printf("o (c) e o (a) do main : %d%d ",C,A);
 printf("\n(A) do main : %d",A);
getch();
}
