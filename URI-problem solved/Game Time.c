#include <stdio.h>
int main ()
{
    int X,Y,total;

    scanf ("%d %d",&X,&Y);

    if (X>Y)
    {
        total = (Y+24)-X;
    }

    if (X==Y)
    {
        total=24;
    }
    if (X<Y)
    {
        total=(Y - X);
    }

    printf("O JOGO DUROU %d HORA(S)\n",total);

    return 0;


}
