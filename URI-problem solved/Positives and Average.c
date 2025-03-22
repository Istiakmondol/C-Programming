#include<stdio.h>
int  main ()
{
    int sum;
    float a,b,c,d,e,f;
    double avg;
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    sum= 0;
    avg= 0;
    if(a>0)
    {
        sum= sum +1;
        avg= avg +a;
    }
    if (b>0)
    {
        sum= sum + 1;
        avg= avg +b;
    }
    if(c>0)
    {
        sum= sum + 1;
        avg= avg +c;
    }
    if(d>0)
    {
        sum= sum + 1;
        avg= avg +d;
    }
    if(e>0)
    {
        sum= sum + 1;
        avg= avg +e;
    }
    if(f>0)
    {
        sum= sum + 1;
        avg= avg +f;
    }
    printf("%d valores positivos\n",sum);
    avg=avg/sum;
    printf("%.1lf\n",avg);
    return 0;

}
