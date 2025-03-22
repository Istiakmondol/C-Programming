#include <stdio.h>
int main()
{
    int A[100],n,mid,key,i;
    printf("Enter the value of key: ");
    scanf("%d",&key);
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Enter the value of Array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    int low=0,high=n-1;

    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            printf("Found mid: %d",mid+1);
            break;
        }
        else if(A[mid]>key){
            high=mid-1;
        }
        else if (A[mid]<key){
            low=mid+1;
        }
    }
    if(low>high){
        printf("Not Found");
    }

    return 0;



}
