#include <stdio.h>
typedef struct
{
    char name[30];
    int id;
    float mark;
    char grade;
}student;
char grade_calculate (student s)
{
    if(s.mark>=90)
        return 'A';
    else if(s.mark>=80)
        return 'B';
    else if(s.mark>=70)
        return 'C';
    else
        return 'F';
}
float average (student y[],int z)
{
    int i;
    float sum=0;
    for(i=0;i<z;i++)
    {
       sum=sum+y[i].mark;
    }
    return sum/z;
}

int main ()
{
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    fflush(stdin);
    student x[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of student: ");
        gets(x[i].name);
        printf("Enter the id of student: ");
        scanf("%d",&x[i].id);
        printf("Enter the marks of student: ");
        scanf("%f",&x[i].mark);
        x[i].grade=grade_calculate(x[i]);
        fflush(stdin);

    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        printf("Student no: %d",i+1);
        printf("Student Name: %s\nStudent id: %d\nStudent marks: %.2f\nStudent grade: %c\n",x[i].name,x[i].id,x[i].mark,x[i].grade);
    }
    printf("\n");
    printf("Total average: %.2f",average(x,n));
    return 0;

}
