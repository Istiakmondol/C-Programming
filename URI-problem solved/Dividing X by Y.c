#include<stdio.h>
int main()
{
   int a,i;
   double D,X,Y;
   scanf("%d",&a);
   for(i=1; i<=a; i=i+1)
   {
       scanf("%lf %lf",&X,&Y);
       if (Y==0)
       {
           printf("divisao impossivel\n");
       }
       else
       {
           D=(X/Y);
           printf("%.1lf\n",D);
       }

    }

    return 0;
}

