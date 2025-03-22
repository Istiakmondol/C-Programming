#include<stdio.h>
int main ()
{

    double i,j;
    for(i=0; i<=2; i=i+1)
    {
        for(j=1.2; j<4; j=j+1)
        {
            printf("I=%.0lf J=%.1lf\n",i,j);
        }

    }
    return 0;
}
