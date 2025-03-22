#include<bits/stdc++.h>
using namespace std;

int main()
{
stack<int> s;
int n;
cout<<"Input the number of operations : "<<endl;
cin>>n;
int sum =0;
char ops[n];
for(int i=0;i<n;i++)
{
    cin>>ops[i];
}
for(int i=0;i<n;i++)
{
    cout<<ops[i]<<" ";
}
for(int i=0;i<n;i++)
{
    if(ops[i]=='C')
    {
       s.pop();
    }
    else if(ops[i]=='D')
    {
        int previousScore=(int)s.top();
        s.push(2*previousScore);

    }
    else if(ops[i]=='+')
    {
        int prev1=(int)s.top();
        s.pop();


        int prev2=(int)s.top();


        int newpush=prev1+prev2;
        s.push(prev1);
        s.push(newpush);
    }
    else
    {
        s.push((int)ops[i]-48);
    }

}
cout<<endl;


while(!s.empty())
{
    int value=s.top();
    s.pop();
    sum=sum+value;
}
cout<<"Sum is : "<<sum;
}
