#include <stdio.h>
int main()
{
    int X,R,hour,minute,second;

    scanf("%d",&X);

    hour = X/3600;

    R = X%3600;

    minute = R/60;

    second = X%60;

    printf("%d:%d:%d\n",hour,minute,second);

    return 0;



}
