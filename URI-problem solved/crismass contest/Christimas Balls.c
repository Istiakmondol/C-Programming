#include <stdio.h>
int main ()
{
    int B,G;
    scanf("%d",&B);
    scanf("%d",&G);
    G=( G / 2);
    if(G == B)
    printf("Amelia tem todas bolinhas!\n");
    else
    printf("Faltam %d bolinha(s)\n",G-B);
    return 0;
}
