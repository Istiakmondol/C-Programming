#include <stdio.h>
int main ()
{
    double A,B,C,div;

    scanf("%lf %lf %lf",&A,&B,&C);

    div = (A*2 + B*3 + C*5) / (2+3+5);

    printf("MEDIA = %.1lf\n",div);

    return 0;
}
