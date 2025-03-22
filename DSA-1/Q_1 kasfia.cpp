#include <iostream>
#include<stdio.h>
using namespace std;

void SearchPair(int arr[],int n,int A,int B)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==A || arr[i]==B)
        {
            c++;
        }
    }
    if(c>=2)
    {
        cout<<"PAIR MATCHED"<<endl;
    }
    else if(c==1)
    {
       cout<<"ONLY ME"<<endl;
    }
    else
        cout<<"BETTER LUCK NEXT TIME"<<endl;
}
int main ()
{
    int i,j,arr[100],A,B,n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the value of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of A: ";
    cin>>A;
    cout<<"Enter the value of B: ";
    cin>>B;
    SearchPair(arr,n,A,B);





}
