#include <stdio.h>
int fact=1;
void factorial (int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    //printf("%d\n",fact);
}
int main ()
{
    int x;
    scanf("%d",&x);
    factorial(x);
    printf("%d",fact);

    return 0;
}
