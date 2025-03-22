#include <stdio.h>
int main ()
{
    float x,z,a,b,c;

    int total,d,e,f,g,h,i,j,k,l,y;
    scanf("%f",&x);
    a=x/100;
    z=z%100;
    b=z/500;
    z=z%500;
    c=z/200;
    z=z%200;

    y=z*100;

    d=y/1000;
    y=y%1000;
    e=y/500;
    y=y%500;
    f=y/200;
    y=y%200;
    g=/100;
    y=y%100;
    h=y/50;
    y=y%50;
    i=y/25;
    y=y%25;
    j=y/10;
    y=y%10;
    k=y/5;
    y=y%5;
    l=y/1;
    y=y%1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",a,b,c,d,e,f,g,h,i,j,k,l);

    return 0;

}
