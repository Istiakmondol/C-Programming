#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

class Stack{
    Node* head;

    public:
        Stack(){ head = NULL;
         }

    void pop()
    {
        struct Node* cur;
        if(head==NULL)
            printf("list is empty and nothing to delete\n");
        cur=head;
        head=head->next;
        cout<<"Pooped Item: "<<cur->data<<endl;
        free(cur);
    }
    void push(int elem)
    {


        Node* temp = new Node(elem);
        if(!temp){
            cout<<"\n Memory Glitch";
            exit(1);
        }
        temp->next=head;
        head=temp;

    }
    int isEmpty()
    {
        if(head==NULL)
        {
            cout<<"1";
        }
        else{
            cout<<"0";
        }

    }
    int peek()
    {
        cout<<head->data<<endl;
    }
    void display()
    {
            if(head==NULL)    //condition to check whether list is empty
            {
                printf("list is empty\n");
                return;
            }
            struct Node *cur=head;
            int count;
            count=0;
            while(cur!=NULL)                  //the loop traverse until it gets any NULL node
            {
                printf("%d->",cur->data);
                count++;                      //counts the number of nodes or elements present in list
                cur=cur->next;                //moves cur pointer to next node to check and get value
            }
            printf("NULL\n");

    }
};

int main()
{
    int choice,x;
    Stack s;
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5.isEmpty\n\t 6.EXIT");
    while(1)
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            cout<<"Enter the element: ";
            cin>>x;
            s.push(x);
        }
        else if(choice==2)
        {
            s.pop();
        }
        else if(choice==3)
        {
            s.display();
        }
        else if(choice==4)
        {
            s.peek();
        }
        else if(choice==5)
        {
            s.isEmpty();
        }
        else if(choice==6)
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        else
        {
            printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
    }
    return 0;
}
