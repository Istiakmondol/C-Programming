#include<stdio.h>
int main ()
{
    int X,i;
    scanf("%d",&X);
    for(i=X; i<=X+11; i=i+1)
    {
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
