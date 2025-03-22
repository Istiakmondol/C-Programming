#include<stdio.h>
int main ()
{
    int c,i,j,n=20,k=100,m=20;
    for(i=n/2;i<=n;i++)
    {
        for(j=2;j<=n;j=j*2)
        {
            c+=k+n/2;
        }
    }

    for(i=0;i<=m;i++)
    {
        for(j=2;j<=n;j=j+=2)
        {
            c+=k+n/2;
        }
    }

    return 0;
}
