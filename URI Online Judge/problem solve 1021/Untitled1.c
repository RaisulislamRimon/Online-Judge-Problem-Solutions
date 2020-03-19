#include<stdio.h>
int main()
{
    double f=576.73;
    int y;
    y=(int)f;
    double m=(f-y);
    int n=m*100;

    //m=m*100;
    printf("%.2lf \n", m);

    printf("%d\n", n);

    return 0;

}
