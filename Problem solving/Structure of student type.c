#include <stdio.h>
typedef struct
{
    char name[30];
    char id[30];
    float cgpa;
    float score;
}student;
void info (student s[], int l)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        fflush(stdin);
        printf("Enter name of student: ");
        gets(s[i].name);
        printf("Enter student's id: ");
        gets(s[i].id);
        printf("Enter student's CGPA: ");
        scanf("%f",&s[i].cgpa);
        printf("Enter student's score: ");
        scanf("%f",&s[i].score);
        printf("\n");
        printf("\n");

    }
}

void average (student s[], int l)
{

    int i,j;
    float avg=0;
    for(i=0;i<l;i++)
    {
        avg+=s[i].score;
    }
    printf("Average of all student: %.2f\n",avg/l);
}

void count_max (student s[], int l)
{

    int i,j;
    float max=0;
    for(i=0;i<l;i++)
    {
        if(s[i].score > max)
        {
            max=s[i].score;
        }

    }
    printf("Max value of all student: %.2f\n",max);
}
void findastudent (student s[], int l, float a)
{
    int i,j;
    printf("Enter the value of that student: ");
    scanf("%f",&a);
    for(i=0;i<l;i++)
    {
       if(a==s[i].score)
       {
           printf("\n");
           printf("*****peer matched******\n");
           printf("Student name: %s\n",s[i].name);
           printf("Student id: %s\n",s[i].id);
           printf("Student CGPA: %.2f\n",s[i].cgpa);
           printf("Student score: %.2f\n",s[i].score);
           printf("\n");

       }
    }
}
void displayvalue (student s[], int l)
{
    int i,j;
    printf("    Name       -     Id     -  cgpa - score\n");
    for(i=0;i<l;i++)
    {
        printf("%s - %s  -  %.2f - %.2f\n",s[i].name,s[i].id,s[i].cgpa,s[i].score);
        printf("\n");
    }
}


int main ()
{
    int n,z;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    fflush(stdin);
    student x[n];
    info(x,n);
    average(x,n);
    count_max(x,n);
    findastudent(x,n,z);
    displayvalue(x,n);
    return 0;





}

