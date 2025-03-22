#include<stdio.h>
int main ()
{
    double a,b,c,max,min,mid;

    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>b && a>c)
    {
        max=a;
        if(b>c)
        {
            mid=b;
            min=c;
        }
        else
        {
           mid=c;
           min=b;
        }
    }
    else if (b>c && b>a)
    {
       max=b;
       if(a>c)
       {
           mid=a;
           min=c;
       }
       else
       {
           mid=c;
           min=a;
       }
    }
    else
    {
        max=c;
        if(b>a)
        {
            mid=b;
            min=a;
        }
        else
        {
            mid=a;
            min=b;
        }
    }

    if(max >= mid + min)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(max*max == mid*mid + min*min)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(max*max > mid*mid + min*min)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(max*max < mid*mid + min*min)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(max==mid && mid==min)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
     else if(max==mid || mid==min)
    {
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
