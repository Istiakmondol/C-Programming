#include <stdio.h>
int print(int arr[], int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int scan (int arr[], int len)
{
    int i;
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int sort(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


}

int main ()
{

    int a[50],n=8;
    scan(a,n);
    sort(a,n);
    print(a,n);
    return 0;

}
