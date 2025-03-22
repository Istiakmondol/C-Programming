
#include <stdio.h>
int main()
{
    int V,i=0,j,temp;
    char a[100];
    scanf("%d",&V);
    while (1)
    {
        if (V<=0)
        {
            for (i=i-1;i>=0;i--)
            {
                printf("%c",a[i]);
            }
            printf("\n");
            return 0;
        }
        temp=V%16;
        V=V/16;
        if (temp<10)
        {
            a[i]=temp+48;
            i++;
        }
        else
        {
            a[i]=temp+55;
            i++;
        }
    }
    return 0;
}
