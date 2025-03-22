#include <stdio.h>
int main ()
{
    int N,i,total;

    scanf("%d",&N);

    for ( i = 2; i <= N ; i = i + 2)
    {
        total= i*i;
        printf("%d^2 = %d\n",i,total);
    }

    return 0;
}
