#include <stdio.h>
int main ()
{
    int a,i,count=0,remain=0,x,total;
    scanf("%d",&a);
    for(i=1; i<=a;i++)
    {

        scanf("%d",&x);

        if (x%3==0)
        {
            count=(count+x);
        }
        else
        {
           count=(count+x);
           if (x%3==1)
           {
               remain=(remain+1);
           }
           else if (x%3==2)
           {
               remain=(remain+2);
           }


        }



    }
    total=(count-remain);


    printf("%d\n",total);





    return 0;
}
