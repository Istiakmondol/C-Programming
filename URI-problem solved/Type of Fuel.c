#include <stdio.h>
int main ()
{
    int x,A=0,G=0,D=0;
    printf("MUITO OBRIGADO\n");
    scanf("%d",&x);
    while(x!=4)
{
    scanf("%d",&x);
    if (x==1)
        {
           A=A+1;
        }
    else if (x==2)
        {
            G=G+1;

        }

    else if (x==3)
        {
            D=D+1;
        }
    else if (x==4)
    {
        break;
    }
}
printf("Alcool: %d\n",A);
printf("Gasolina: %d\n",G);
printf("Diesel: %d\n",D);




    return 0;

}
