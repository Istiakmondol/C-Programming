#include<stdio.h>
int main ()
{

    int x,y=0,z=1,X=1;
    float a,b=0.0,c=1;
    scanf("%d %f",&x,&a);

    // (a)Assignment Operator
    y=x;
    b=a;
    x=a;
    printf("Assignment: %f assigned to an int produces %d\n",a,x);
    a=y;
    printf("Assignment: %d assigned to an int produces %f\n",y,a);

    //(b) Type casting
    printf("Type Casting: (float) %d produces %f\n",y,z*a);
    printf("Type Casting: (int) %.3f produces %.0f\n",b,-b);


    return 0;


}
