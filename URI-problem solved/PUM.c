#include <stdio.h>
int main ()
{
    int a,i,x=1,y=2,z=3;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        printf("%d %d %d PUM\n",x,y,z);
        x=(x+4);
        y=(y+4);
        z=(z+4);
    }
    return 0;
}
