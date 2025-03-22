#include <stdio.h>
int main ()
{
    int sh,sm,eh,em,x,h=0,m=0,i;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if(sh==eh && sm==em)
    {
        h=24;
        m=0;
    }
    for(i=sm;i<=60;i++)
    {
        if(sh==eh && i==em)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
            return 0;
        }
        m++;
        if(m%60==0)
        {
            h++;
            m=0;
        }
        if(i==60)
        {
            i=0;
            sh++;
            if(sh==24)
            {
                sh=0;
            }
        }

    }

}
