#include<stdio.h>
int main ()
{
    int N,i,C,in,out;
    scanf("%d",&N);
    in = 0;
    out = 0;
    for(i=1; i<=N; i= i+1)
    {
        scanf("%d",&C);

        if (C>=10 && C<=20)
        {
            in = in+1;
        }
        else
        {
            out = out+1;
        }
    }

    printf("%d in\n",in);

    printf("%d out\n",out);

    return 0;
}
