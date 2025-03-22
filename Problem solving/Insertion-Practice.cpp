#include <stdio.h>
#include <iostream>
using namespace std;

void print(int array[],int n)
{
    cout<<"sorted data: ";
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
}

void insertionSort(int array[], int n) {
  for (int i = 1; i < n; i++) {
    int key = array[i];
    int j = i - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main ()
{
    int array[100],n;
    cout<<"Enter the Array length: ";
    cin>>n;
    cout<<"Enter the Values: ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    insertionSort(array,n);
    print(array,n);
    return 0;

}



