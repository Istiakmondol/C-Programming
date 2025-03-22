#include<stdio.h>
int main ()
{
    double A,B,divides;

    scanf("%lf %lf",&A,&B);

    divides=(A*3.5 + B*7.5)/(3.5 + 7.5);

    printf("MEDIA = %.5lf\n",divides);

    return 0;

}
