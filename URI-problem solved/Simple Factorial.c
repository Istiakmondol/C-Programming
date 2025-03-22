#include <stdio.h>
void main ()
{

    int i,t,n;
    scanf ("%d",&n);
        for (i=n-1; i>=1; i--){
            t=(n*i);
            n=t;

        }
        printf("%d\n",n);
}
