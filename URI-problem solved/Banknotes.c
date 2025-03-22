#include<stdio.h>

int main ()

{
    int N,han,fif,tw,ten,five,two,one,R;

    scanf("%d",&N);

    han=N/100;

    R=N%100;

    fif=R/50;

    R=R%50;

    tw=R/20;

    R=R%20;

    ten=R/10;

    R=R%10;

    five=R/5;

    R=R%5;

    two=R/2;

    R=R%2;

    one=R/1;

    R=R%1;

    printf("%d\n",N);

    printf("%d nota(s) de R$ 100,00\n",han);

    printf("%d nota(s) de R$ 50,00\n",fif);

    printf("%d nota(s) de R$ 20,00\n",tw);

    printf("%d nota(s) de R$ 10,00\n",ten);

    printf("%d nota(s) de R$ 5,00\n",five);

    printf("%d nota(s) de R$ 2,00\n",two);

    printf("%d nota(s) de R$ 1,00\n",one);

    return 0;




}
