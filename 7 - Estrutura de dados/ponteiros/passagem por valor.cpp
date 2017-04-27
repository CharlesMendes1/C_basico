#include<stdio.h>
#include<math.h>
void quadrado (int v[], int n){
	int i;
	for (i = 0; i < n; i += 1)
		v[i] = pow (v[i] ,2);
	printf ("\nAo quadrado : \n");
	for (i = 0; i < n; i += 1)
		printf ("%d ",v[i]);
 }

 int main ( int argc , char * argv [])
 {
	int i, a [10] = {0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
	printf("No inicio:\n ");
	for (i = 0; i < 10; i += 1)
		printf ("%d ",a[i]);
	quadrado (a ,10);
	printf ("\nVoltou Na main() \n");
	for (i = 0; i < 10; i += 1)
		printf ("%d ",a[i]);
	return 0;
}
