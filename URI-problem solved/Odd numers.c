#include<stdio.h>
int main ()
{
    int i,X;
    scanf("%d",&X);
    for (i=1; i<=X; i=i+1)
    {
       if(i % 2 == 1)
       {
           printf("%d\n",i);
       }
    }
    return 0;
}
