#include <stdio.h>
int main ()
{
    int i,j,k,C;
    double M[12][12],sum=0.0;
    char T[2];
    scanf("%d",&C);
    scanf("%s",T);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
            if(j==C)
            {
               sum+=M[i][j];
            }
        }
    }
    if(T[0]=='S')
    {
        printf("%.1lf\n",sum);
    }

    else if(T[0]=='M')
    {
        sum=sum/12.0;
        printf("%.1lf\n",sum);
    }
    return 0;

}
