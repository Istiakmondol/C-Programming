#include<bits/stdc++.h>
using namespace std;
searchpair(int arr[],int a,int b)
{
    int n;
    cout<<"Enter the elements to search";
    cin>>a>>b;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]=a)
        {
            cout<<a<<" "<<"found in "<<i<<"th position";
        }
        else
        {
            cout<<"not found";
        }
    }
    cout<<endl;
    for(int j=0;j<=n;j++)
    {
        if(arr[j]=b)
        {
            cout<<b<<" "<<"found in "<<j<<"th position";
        }
    }


}
int main()
{
    int n;
    int arr[n];
    int a,b;
    cout<<"Enter the size of the array : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];


    }
    for(int i=0;i<=n;i++)
    {
              cout <<arr[i];
    }

    searchpair(arr,a,b);
}
