#include <stdio.h>
int main()
{
    float A,B,C;

    double total;

    scanf("%f %f %f",&A,&B,&C);

    if (A+B > C && A+C > B && B+C > A)
    {
        total = (A+B+C);
        printf("Perimetro = %.1lf\n",total);
    }
    else
    {
        total = ((A+B)/2)*C;
        printf("Area = %.1lf\n",total);
    }

    return 0;
}
