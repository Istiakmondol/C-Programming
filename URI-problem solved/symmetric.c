#include <stdio.h>
int main ()
{
    int i,j,n,m,a[100][100],b[100][100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
}

