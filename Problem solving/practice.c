#include <stdio.h>
#include <math.h>
int main ()
{
    int n,a,i,sq,r,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf ("%d",&a);
        sq=ceil(sqrt(a));
        r=sq*sq-a;
        if(r<sq)
        {
            x=r+1;
            y=sq;
            printf("case %d: %d %d\n",i,x,y);
        }
        else
        {
            x=2*sq-r-1;
            y=sq;
            printf("case %d: %d %d\n",i,x,y);

        }

    }
    return 0;
}
