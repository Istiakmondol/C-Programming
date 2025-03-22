#include <stdio.h>

int callme(int n)
{
    if(n<1) return 1;
    return n*=callme(n-1);

}
int main ()
{
    int x;
    scanf("%d",&x);
    printf("%d",callme(x));
}
