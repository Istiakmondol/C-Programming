#include<stdio.h>
int main ()
{
    int a,X,Y,i,j,big,sml,z=0;

    scanf("%d",&a);
    for(i=1; i<=a; i=i+1)
    {
        scanf("%d %d",&X,&Y);
        if(X>Y)
        {
            big=X;
            sml=Y;
        }
        else
        {
            big=Y;
            sml=X;
        }
        for(j=sml+1; j<big; j=j+1)
        {
           if(j%2==1)
           {
               z=z+j;
           }
        }
        printf("%d\n",z);
        z=0;






    }
    return 0;



}
