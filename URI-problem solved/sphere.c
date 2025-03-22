#include<stdio.h>
int main ()
{
    double A,R,mul;

    scanf("%lf",&R);

    A = 3.14159;

    mul =  (4.0/3)*A*R*R*R;

    printf("VOLUME = %.3lf\n",mul);

    return 0;
}
