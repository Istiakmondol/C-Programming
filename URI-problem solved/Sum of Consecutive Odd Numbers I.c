#include <stdio.h>
int main ()
{
    int X,Y,i,max,min,sum=0;
    scanf("%d %d",&X,&Y);
    if (X>Y)
    {
        max=X;
        min=Y;
    }
    else
    {
        max=Y;
        min=X;
    }
    for(i=min+1; i<max; i=i+1)
    {
        if (abs(i)%2 == 1)
        {
            sum=sum+i;
        }

    }

    printf("%d\n",sum);



    return 0;
}
