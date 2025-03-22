#include <stdio.h>
int main ()
{
    int C1,U1,C2,U2;
    float P1,P2;
    double mul1,mul2,sum;
    scanf ("%d %d %f",&C1,&U1,&P1);
    scanf ("%d %d %f",&C2,&U2,&P2);
    mul1=U1*P1;
    mul2=U2*P2;
    sum=mul1 + mul2;

    printf("VALOR A PAGAR: R$ %.2lf\n",sum);
    return 0;
}
