#include <stdio.h>
int main ()
{
    int i,j,n,a[20],temp;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=19;i<20,j>=0;i++,j--)
    {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
    }
    for(i=19;i>=0;i--)
    {
        printf("N[%d] = %d\n",19-i,a[i]);
    }
    return 0;
}
