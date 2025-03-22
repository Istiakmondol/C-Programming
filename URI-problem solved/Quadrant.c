#include <stdio.h>
int main ()
{
    int X,Y,i;
    for(i=1; i; i=i+1)
    {
        scanf("%d %d",&X,&Y);
        if(X>0 && Y>0)
        {
            printf("primeiro\n");
        }

        else if(X<0 && Y>0)
        {
            printf("segundo\n");
        }
        else if (X>0 && Y<0)
        {
            printf("quarto\n");
        }
        else if (X<0 && Y<0)
        {
            printf("terceiro\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}
