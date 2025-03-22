#include <stdio.h>
typedef struct
{
    char name[30];
    char country[30];
    int run[3];
    int wicket[3];
    float point[3];
}player;

void info(player s[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter name of player: ");
        gets(s[i].name);
        printf("Enter name of country: ");
        gets(s[i].country);
        for(j=0;j<3;j++)
        {
            printf("Enter run in match %d: ",j+1);
            scanf("%d",&s[i].run[j]);
        }
        for(j=0;j<3;j++)
        {
            printf("Enter wickets in match %d: ",j+1);
            scanf("%d",&s[i].wicket[j]);
        }
    }
}
void point (player s[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i].point[j]=(s[i].run[j]/25)*5+(s[i].wicket[j]*12);
        }
    }
}


void man_of_the_match(player s[],int n)
{
    point(s,n);
    int i,j,k,l;
    int first=0,second=0,third=0;
    float max_i=0,max_k=0,max_l=0;
    float max;
    for(i=0;i<3;i++)
    {
        max=s[0].point[i];
        for(j=1;j<n;j++)
        {
            if(s[j].point[i]>max)
            {
                if(i==0)
                {
                    max=s[j].point[i];
                    first=j;
                }
                else if(i==1)
                {
                    max=s[j].point[i];
                    second=j;
                }
                else if(i==2)
                {
                    max=s[j].point[i];
                    third=j;
                }
            }


        }

    }
    printf("Man of the match in match 1: %s\n",s[first].name);
    printf("Man of the match in match 1: %s\n",s[second].name);
    printf("Man of the match in match 1: %s\n",s[third].name);
    if(first==second || first==third)
    {
        printf("Man of the series: %s",s[first].name);
    }
    else if (second==third)
    {
        printf("Man of the series: %s",s[second].name);
    }
    else
    {
        for(i=first;i<first+1;i++)
        {
            for(k=second;k<second+1;k++)
            {
               for(l=third;l<third+1;l++)
               {
                   for(j=0;j<n;j++)
                   {
                       max_i+=s[i].point[j];
                       max_k+=s[k].point[j];
                       max_l+=s[l].point[j];

                   }
               }
            }

        }
        if(max_i>max_k && max_i>max_l)
        {
            printf("Man of the series: %s",s[first].name);
        }
        else if(max_k>max_i && max_k>max_l)
        {
            printf("Man of the series: %s",s[second].name);
        }
        else
        {
            printf("Man of the series: %s",s[third].name);
        }
    }

}




int main ()
{
    int y;
    printf("Enter total number of player: ");
    scanf("%d",&y);
    player x[y];
    info(x,y);
    point(x,y);
    man_of_the_match(x,y);




    return 0;
}

