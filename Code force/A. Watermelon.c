#include <stdio.h>
int main ()
{
    int sumTime,min,max,i,d,x[30],y=0;
    scanf("%d %d",&d,&sumTime);
    for(i=0;i<d;i++)
    {
        scanf("%d %d",&min,&max);
        x[i]=min+1;
        y+=x[i];

    }

    if(y==sumTime)
    {
        printf("YES\n");
        for(i=0;i<d;i++)
        {
            printf("%d ",x[i]);
        }
    }
    else
        printf("NO");



    return 0;

}
