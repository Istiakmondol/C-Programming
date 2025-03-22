#include<stdio.h>
int main ()
{
    int X,days,month,year,Y;

    scanf("%d",&X);

    year = X/365;

    Y = X%365;

    month = Y/30;

    days = Y%30;

    printf("%d ano(s)\n",year);

    printf("%d mes(es)\n",month);

    printf("%d dia(s\n",days);

    return 0;

}
