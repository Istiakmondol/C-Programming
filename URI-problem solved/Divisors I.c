#include <stdio.h>
void main ()
{
    int i,x;
    scanf ("%d",&x);
    for (i=1; i<=x; i++){
        if(x%i==0){
            printf("%d\n",i);
        }
    }
}
