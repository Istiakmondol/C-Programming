#include <stdio.h>
int main ()
{
    int a,b,x=1;
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        x*=a;
        b--;
    }
    printf("%d",x);

}
