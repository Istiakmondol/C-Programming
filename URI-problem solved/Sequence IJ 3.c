#include<stdio.h>
int main ()
{
    int i,j,x=7;
    for(i=1; i<10; i=i+2)
    {
        for(j=1; j<=3; j=j+1)
        {
            printf("I=%d J=%d\n",i,x);
            x=x-1;
        }
        x=x+5;

    }
    return 0;
}
