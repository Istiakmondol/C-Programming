#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j,n;
    gets(str2);
    for(i=0;str2[i]!=0;i++)
    {
        str1[i]=str2[i];
    }
    str1[i]=0;
    printf("%s\n",str1);
    return 0;
}
