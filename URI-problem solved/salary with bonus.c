#include<stdio.h>
int main ()
{
    float X,Y,total;
    char name [30];
    gets (name);
    scanf ("%f %f",&X,&Y);
    total = X+(Y*15/100);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;


}
