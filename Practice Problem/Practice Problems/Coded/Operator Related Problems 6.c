#include<stdio.h>
int main ()
{

    int X,Y,x,y;
    scanf("%d %d",&x,&y);
    X=x;
    x*=y;
    printf("Multiplication: %d\n",x);
    X/=y;
    printf("Division: %d",X);
    return 0;
}

