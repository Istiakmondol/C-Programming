#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;

    int sum;

    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);

    sum = 0;

    if (a>0)
    {
        sum=sum+1;
    }
    if(b>0)
    {
        sum=sum+1;
    }
    if(c>0)
    {
        sum=sum+1;
    }
    if(d>0)
    {
        sum=sum+1;
    }
    if(e>0)
    {
        sum=sum+1;
    }
    if(f>0)
    {
        sum=sum+1;
    }
    printf("%d valores positivos\n",sum);

    return 0;
}
