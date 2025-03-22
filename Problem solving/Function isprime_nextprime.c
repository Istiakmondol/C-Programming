#include <stdio.h>
int isprime (int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
        return 0;


}
int nextprime(int n)
{
    int i,j,count=0,test;
    for(i=n+1;i<=n+5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }

        }

        if(count==2)
        {
            test=isprime(i);
            if(test==1)
            {
                return i;
            }
        }
        else{
            count=0;
        }





    }




}
int main ()
{
    int i,x,result;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&x);
        result=nextprime(x);
        printf("%d\n",result);

    }
}
