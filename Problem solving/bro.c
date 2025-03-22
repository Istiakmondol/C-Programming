#include <stdio.h>
typedef struct
{
    char name[30];
    char country[20];
    int runs[3];
    int wickets[3];
    float point[3];
}player;

void info(player s[], int x)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        getchar();
        gets(s[i].name);
        gets(s[i].country);
        for (j = 0; j < 3; j++) scanf("%d",&s[i].runs[j]);
        for (j = 0; j < 3; j++) scanf("%d",&s[i].wickets[j]);
    }
}

void count_points(player s[], int x)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s[i].point[j] = ((s[i].runs[j] / 25) * 5) + s[i].wickets[j] * 12;
        }
    }
}
void man_of_the_match(player s[], int x)
{
    count_points(s,x);
    int first=0, second=0, third=0, i, j;
    float max;
    for (i = 0; i < 3; i++)
    {
        max = s[0].point[i];
        for (j = 1; j < x; j++)
        {
            if (max < s[j].point[i])
            {
                if (i == 0)
                    first = j;
                else if (i == 1)
                    second = j;
                else if (i == 2)
                    third = j;
            }
        }
    }
    printf("Man of the match of 1st match %s\n", s[first].name);
    printf("Man of the match of 2nd match %s\n", s[second].name);
    printf("Man of the match of 3rd match %s\n", s[third].name);
    if(first == second || first == third ) printf("Man of the match of series %s\n",s[first].name);
    else if (second == third) printf("Man of the match of series %s\n",s[second].name);
}
int main()
{
    int x, i;
    printf("Total number of players: ");
    scanf("%d", &x);
    player s[x];
    info(s, x);
    man_of_the_match(s,x);
    return 0;
}
