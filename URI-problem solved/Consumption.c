#include<stdio.h>
int main ()
{
    int X;
    float Y;
    double total;
    scanf ("%d %f",&X,&Y);
    total = (X/Y);
    printf("%.3lf km/l\n",total);
    return 0;


}
