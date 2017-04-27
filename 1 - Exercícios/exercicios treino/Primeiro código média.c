#include <stdio.h>
main()
{   float a,b,c,Media;
    printf("Digite tres numeros");
    scanf("%f%f%f",&a,&b,&c);
    Media=(a+b+c)/3;
    printf("A media dos numeros \n %f,%f, e %f e igual a %.2f",a,b,c,Media);
    system("PAUSE");
    return 0;
    }
