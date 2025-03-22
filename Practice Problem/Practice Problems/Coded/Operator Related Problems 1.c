#include<stdio.h>
int main ()
{
    int x,y,addition,subtraction,multiplication,remainder;
    double quotient;

    scanf("%d %d",&x,&y);



    printf("addition=%d\n",x+y);
    printf("subtraction=%d\n",x-y);
    printf("multiplication=%d\n",x*y);
    printf("remainder=%d\n",x%y);
    printf("quotient=%.2lf",(x*1.0)/y);






    return 0;
}
