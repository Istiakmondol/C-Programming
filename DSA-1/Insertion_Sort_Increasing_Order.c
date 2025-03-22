#include <stdio.h>
int main ()
{
    int a[100],n,i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n-1;j++)
    {
        t=a[j];
        i=j-1;
        while (i>=0 && a[i]>t)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
