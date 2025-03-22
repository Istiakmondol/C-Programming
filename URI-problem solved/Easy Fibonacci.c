#include <stdio.h>
int main ()
{
    int i,n,a=0,b=1,c;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0\n");
    }
    else
    {
        printf("0");
        for(i=1;i<=n-1;i++)
        {
           printf(" %d",b);
           c=b;
           b=a+b;
           a=c;
        }
    }
    printf("\n");

    return 0;
}
