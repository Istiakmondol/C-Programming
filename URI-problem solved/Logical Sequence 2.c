#include <stdio.h>
int main ()
{
    int x,y,i,j,a=1,k,n;
    scanf("%d %d",&x,&y);
    k=y/x;
    n=x;
    for(i=1;i<=k;i++)
    {
        printf("%d",a);

        for(j=a+1;j<=n;j++)
        {
          printf(" %d",j);
          printf("\n");
          k+=a;
          n+=a;

        }

    }
    return 0;
}
