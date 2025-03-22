#include <stdio.h>
#include <string.h>
int main ()
{

    char str1[]="vertebrado", str2[]="invertebrado";
    char str3[]="ave", str4[]="mamifero", str5[]="inseto", str6[]="anelideo";
    char str7[]="carnivoro", str8[]="onivoro", str9[]="herbivoro", str10[]="hematofago";
    char a[20],b[20],c[20];
    gets(a);
    gets(b);
    gets(c);
    if(0==strcmp(a,str1))
    {
        if(0==strcmp(b,str3))
        {
            if(0==strcmp(c,str7))
            {
                printf("aguia\n");
            }
            else if(0==strcmp(c,str8))
            {
                printf("pomba\n");
            }
        }
        else if(0==strcmp(b,str4))
        {
            if(0==strcmp(c,str8))
            {
                printf("homem\n");
            }
            else if(0==strcmp(c,str9))
            {
                printf("vaca\n");
            }
        }
    }

    if(0==strcmp(a,str2))
    {
        if(0==strcmp(b,str5))
        {
            if(0==strcmp(c,str10))
            {
                printf("pulga\n");
            }
            else if(0==strcmp(c,str9))
            {
                printf("lagarta\n");
            }
        }
        else if(0==strcmp(b,str6))
        {
            if(0==strcmp(c,str10))
            {
                printf("sanguessuga\n");
            }
            else if(0==strcmp(c,str8))
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
