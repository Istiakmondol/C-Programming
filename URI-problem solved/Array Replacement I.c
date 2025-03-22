#include <stdio.h>
int main ()
{
    int i,j,a[10],temp;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
        if(a[j]<=0)
        {
            a[j]=1;
        }
        printf("X[%d] = %d\n",j,a[j]);
    }
    return 0;
}
