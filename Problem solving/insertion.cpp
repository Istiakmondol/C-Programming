#include<iostream>
using namespace std;

void Insertion(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void printout(int arr[], int n)
{

cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100],n;
    cout<<"Enter the Array Size: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Insertion(arr,n);
    printout(arr,n);

}
