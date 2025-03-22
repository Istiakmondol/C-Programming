void stackpush(stack<int> ST)
{
    if(ST.empty())
    {
        return;
    }
int x=ST.top();
ST.pop();
stackpush(ST);
cout<<n<<" ";
ST.push(n);

}
