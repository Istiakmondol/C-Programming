#include <stdio.h>
int main()
{
    int a,b,c,i,j,n;
    printf("Enter the value: ");
    scanf("%d %d",&a,&b);
    c=a/b;
    i=a%b;
    printf("div=%d\n",c);
    printf("Remain=%d",i);
    return 0;

}


