#include <stdio.h>
void main ()
{

    int N,i,j,k,l,c=1,x,S=0;
    scanf ("%d",&N);
    for (i=1; i<=N; i++){
        scanf("%d",&x);
        if(x%2==0)
        {
            printf("%d\n",S);
        }
        else{
            printf("%d\n",c);
        }
    }
}


