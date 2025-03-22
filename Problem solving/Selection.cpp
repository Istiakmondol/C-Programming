#include<iostream>
using namespace std;

void Selection(int arr[],int n)
{
    int i,j,minimum,temp;
    for(i=0;i<n;i++)
    {
        minimum=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minimum])
            {
                minimum=j;
            }
        }
        if(minimum!=i)
        {
            temp=arr[i];
            arr[i]=arr[minimum];
            arr[minimum]=temp;
        }
    }
}
void printout(int arr[], int n)
{
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}



int main ()
{
    int i,j,arr[100],minimum,n;
    cout<<"Enter the Array Size: ";
    cin>>n;
    cout<<"Enter the Array List: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Selection(arr,n);
    printout(arr,n);
}
