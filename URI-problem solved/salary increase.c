#include <stdio.h>
int main()
{
    int total;
    float X;
    double total1, total2;

    scanf("%f",&X);

    if (X>=0 && X<=400.00)
    {
        total1 = ((X*15)/100.0)+X;
        total2 = (X*15/100.0);
        total  = 15%
        printf("Novo salario: %.2lf\n",total1);
        printf("Reajuste ganho: %.2lf\n",total2);
        printf("Em percentual: %d %%\n",total);
    }
    else if (X>=400.01 && X<=800.00)
    {
        total1 = ((X*12)/100.0)+X;
        total2 = (X*12/100.0);
        total  = 12%
        printf("Novo salario: %.2lf\n",total1);
        printf("Reajuste ganho: %.2lf\n",total2);
        printf("Em percentual: %d %%\n",total);
    }
    else if (X>=800.01 && X<=1200.00)
    {
        total1 = ((X*10)/100.0)+X;
        total2 = (X*10/100.0);
        total  = 10%
        printf("Novo salario: %.2lf\n",total1);
        printf("Reajuste ganho: %.2lf\n",total2);
        printf("Em percentual: %d %%\n",total);
    }
    else if (X>=1200.01 && X<=2000.00)
    {
        total1 = ((X*7)/100.0)+X;
        total2 = (X*7/100.0);
        total  = 7%
        printf("Novo salario: %.2lf\n",total1);
        printf("Reajuste ganho: %.2lf\n",total2);
        printf("Em percentual: %d %%\n",total);
    }
    else if (X>2000.00)
    {
        total1 = ((X*4)/100.0)+X;
        total2 = (X*4/100.0);
        total  = 4%
        printf("Novo salario: %.2lf\n",total1);
        printf("Reajuste ganho: %.2lf\n",total2);
        printf("Em percentual: %d %%\n",total);
    }
    return 0;
}

