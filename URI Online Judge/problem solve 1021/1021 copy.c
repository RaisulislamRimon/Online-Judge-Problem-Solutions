#include<stdio.h>
int main()
{
    double f;
    int y;
    y=(int)f;
    double m=f-y;
    int n=m*100;
    //m=m*100;


    scanf("%f", &f);

    int a, x, x1, x2, x3,x4,x5, x6,z1, z2, z3, z4, z5, z6, z7, z8, z9, z10;


    printf("NOTAS:\n");

    a=f/100;
    printf("%d nota(s) de R$ 100.00\n", a);

    x=(int)f%100;


    x1=x/50;
    printf("%d nota(s) de R$ 50.00\n", x1);

    x=x%50;


    x2=x/20;
    printf("%d nota(s) de R$ 20.00\n", x2);

    x=x%20;


    x3=x/10;
    printf("%d nota(s) de R$ 10.00\n", x3);

    x=x%10;


    x4=x/5;
    printf("%d nota(s) de R$ 5.00\n", x4);

    x=x%5;


    x5=x/2;
    printf("%d nota(s) de R$ 2.00\n", x5);

    x=x%2;


    printf("MOEDAS\n");

    x6=x/1;
    printf("%d moeda(s) de R$ 1.00\n", x6);

    x=x%1;


    z1=(m*100)/(0.50*100);
    printf("%d moeda(s) de R$ 0.50\n", z1);

    z2=n-(0.50*100);


    z3=z2/(0.25*100);
    printf("%d moeda(s) de R$ 0.25\n", z3);

    z4=z2-z3;


    z5=z4/(0.10*100);
    printf("%d moeda(s) de R$ 0.10\n", z5);

    z6=z4-z5;


    z7=z5/(0.05*100);
    printf("%d moeda(s) de R$ 0.05\n", z7);

    z8=z5-z6;


    z9=z7/(0.01*100);
    printf("%d moeda(s) de R$ 0.01\n", z9);
















    return 0;
}
