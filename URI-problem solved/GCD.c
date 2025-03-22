#include <stdio.h>
int main ()
{
    int x,y,i,sum=0;
    scanf("%d %d",&x,&y);
    for (i=1;i<=x && i<=y; i++)
    {
        if(x%i==0 && y%i==0)
        {
            if(i>sum)
            sum=i;
        }
    }
    printf("%d",sum);
}
