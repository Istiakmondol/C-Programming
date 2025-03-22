#include<stdio.h>
#include<iostream>
using namespace std;

int queue[100],choice,n,top,x,i,front,rear,s=0;

class Queue{
    public:
    void enqueue(int elem)
    {
        if(top>=n-1)
        {
            printf("\n\t Queue Overflow");
        }
        else{
            s=(rear+1)% (n+1);
            queue[s]=elem;
            rear++;
            top++;

        }

    }
    void dequeue()
    {
        if(top<0)
        {
            printf("Queue Underflow");
        }
        else
        {
            s=(front+1)% (n+1);
            cout<<queue[s];
            queue[s]=queue[s+1];
            front++;
            top--;

        }

    }
    void display()
    {
        if(top<0)
        {
            cout<<"Queue is empty";
        }
        else{
            for(i=top;i>=0;i--)
            {
                printf("%d, ",queue[i]);
            }
        }
    }

    void peek()
    {
        cout<<queue[top];
    }
    void isEmpty()
    {
        if(top<=-1)
        {
            cout<<"1";
        }
        else
            cout<<"0";
    }
};


int main()
{
    Queue q;
    top=-1;
    front=-1;
    rear=-1;
    printf("\n Enter the size of Queue[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t Queue OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.isEMPTY\n\t 5.PEEK\n\t 6.EXIT");
    while(1)
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            cout<<"Enter the element: ";
            cin>>x;
            q.enqueue(x);
        }
        else if(choice==2)
        {
            q.dequeue();
        }
        else if(choice==3)
        {
            q.display();
        }
        else if(choice==4)
        {
            q.isEmpty();
        }
        else if(choice==5)
        {
            q.peek();
        }
        else if(choice==6)
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        else
        {
            printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6)");
        }
    }
    return 0;
}

