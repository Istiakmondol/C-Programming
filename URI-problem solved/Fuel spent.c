#include<stdio.h>
int main ()
{
    int X,Y;
    double total;
    scanf("%d %d",&X,&Y);
    total = (X*Y)/12.0;
    printf("%.3lf\n",total);
    return 0;

}
