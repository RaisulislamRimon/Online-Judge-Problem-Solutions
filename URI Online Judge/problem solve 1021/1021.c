#include<stdio.h>
int main()
{
    double f = 576.73;
    int y;
    y = (int)f;
    double m = f - y;
    int n = m * 100;




    int a, x, x1, x2, x3,x4,x5, x6,z1, z2, z3, z4, z5, z6, z7, z8, z9, z10;

    //scanf("%lf", &f);

    printf("NOTAS:\n");

    a=f/100;
    printf("%d nota(s) de R$ 100.00\n", a);

    x=(int)f%100;
    printf("%d is vaghshesh\n", x);

    x1=x/50;
    printf("%d nota(s) de R$ 50.00\n", x1);

    x=x%50;
    printf("%d is vaghshesh\n", x);

    x2=x/20;
    printf("%d nota(s) de R$ 20.00\n", x2);

    x=x%20;
    printf("%d is vaghshesh\n", x);

    x3=x/10;
    printf("%d nota(s) de R$ 10.00\n", x3);

    x=x%10;
    printf("%d is vaghshesh\n", x);

    x4=x/5;
    printf("%d nota(s) de R$ 5.00\n", x4);

    x=x%5;
    printf("%d is vaghshesh\n", x);

    x5=x/2;
    printf("%d nota(s) de R$ 2.00\n", x5);

    x=x%2;
    printf("%d is vaghshesh\n", x);

    printf("MOEDAS\n");

    x6=x/1;
    printf("%d moeda(s) de R$ 1.00\n", x6);

    x=x%1;
    printf("%d is vaghshesh\n", x);

    z1= n / (0.50 * 100);
    printf("%d moeda(s) de R$ 0.50\n", z1);

    z2= n - (0.50 * 100);
    printf("%d is vaghshesh\n", z2);		// vaghshesh = 23

    z3 = z2 / (0.25*100);
    printf("%d moeda(s) de R$ 0.25\n", z3);

    z4 = z2 - (0.25*100);
    printf("%d == vaghshesh\n", z4);


    return 0;
}
