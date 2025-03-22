#include <stdio.h>
int main()
{
    int i,N;
    int sum=0;
    char a[14];
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%s",a);
        printf("%d\n",(a[2]-48)*10 + (a[3]-48) + (a[5]-48)*100 + (a[6]-48)*10 + (a[7]-48) + (a[11]-48)*10 + (a[12]-48));
        sum=0;

    }
    return 0;

}
