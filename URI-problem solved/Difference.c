#include <stdio.h>
int main ()
{
    int A,B,C,D,minus,mul1,mul2;
    scanf ("%d %d %d %d",&A,&B,&C,&D);
    mul1 = A*B;
    mul2 = C*D;
    minus = (mul1 - mul2);
    printf("DIFERENCA = %d\n",minus);
    return 0;

}
