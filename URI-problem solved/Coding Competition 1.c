#include <stdio.h>
int main ()
{
    int a,remain=0,i,count=0,x,total;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&x);
        remain=(x%3);
        count=(count+x);

    }

    total=(count-remain);
    printf("%d\n",total);





    return 0;
}
