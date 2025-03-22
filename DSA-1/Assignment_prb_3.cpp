#include<stdio.h>
#include<iostream>
using namespace std;

int queue[100],choice,n,top,x,i,front,rear;

class Queue{
    void enqueue(int elem)
    {
        if(top>=n-1)
        {
            printf("\n\t Queue Overflow");
        }
        else{
            top++;
            queue[top]=elem;
        }
    }
    void dequeue()
    {
        if(top<0)
        {
            printf("Queue Underflow");
        }
        else{
            printf("\n\t DEQUEUE: %d",queue[(n-1)-top]);
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
    top=-1;
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
            enqueue(x);
        }
        else if(choice==2)
        {
            dequeue();
        }
        else if(choice==3)
        {
            display();
        }
        else if(choice==4)
        {
            isEmpty();
        }
        else if(choice==5)
        {
            peek();
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

