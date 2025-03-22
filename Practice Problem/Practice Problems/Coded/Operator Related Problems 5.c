#include <stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x = a - b / 3 + c * 2 - 1;
    y= a -( b / ( 3 + c ) * 2)-1;
    z = a - ( ( b / 3) + c * 2) - 1;
    printf("X = %d",x);
    printf("Y = %d",y);
    printf("Z = %d",z);
    return 0;
}
