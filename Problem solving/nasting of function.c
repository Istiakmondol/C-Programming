#include <stdio.h>
int fact (int x)
{

    int count=1,i;
    for(i=1;i<=x;i++)
    {
        count=count*i;
    }
    return count;
}
int nPr(int n, int r)
{
    int factn,factr,factnr,total;
    factn=fact(n);
    factr=fact(r);
    factnr=fact(n-r);
    total=factn/factnr;
    return total;
}
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",nPr(a,b));
    return 0;

}
