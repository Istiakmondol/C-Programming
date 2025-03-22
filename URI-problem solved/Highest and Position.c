#include <stdio.h>
int main ()
{
    int i,j,n,a[100],max,id;
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++)
    {
        if(i==0)
        {
            max=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
            id=i;
        }
    }
    printf("%d\n%d",max,id+1);
    return 0;
}
