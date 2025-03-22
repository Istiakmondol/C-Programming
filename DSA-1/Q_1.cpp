#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};


struct node *head;

void init()
{
    head=NULL;
}
void Insert(int element)
{
    struct node *New;
    New=(struct node*)malloc(sizeof(struct node));
    New->value=element;
    New->next=NULL;
    New->next=head;

    head=New;
}

void InsertAtPos(int elem, int num)
{
    struct node* New;
    New=(struct node*)malloc(sizeof(struct node));
    New->value=elem;
    New->next=NULL;
    struct node* prev=head;
    while(prev->value!=num)
    {
        prev=prev->next;
    }
    New->next=prev->next;
    prev->next=New;
}

void PrintList()
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    struct node *cur=head;
    int count;
    count=0;
    while(cur!=NULL)
    {
        printf("%d->",cur->value);
        count++;
        cur=cur->next;
    }
    printf("NULL\n");
    printf("number of nodes %d\n",count);
}

void DeleteAtPos(int ele)
{
    if(head==NULL)
        printf("list is empty and nothing to delete\n");
    struct node* cur=head;
    struct node* prev=NULL;
    while(cur->value!=ele)
    {
        prev=cur;
        cur=cur->next;
    }
    if(prev!=NULL)
        prev->next=cur->next;       //the address of next node after the node containing element to be deleted is assigned to the previous node of the node containing the element to be deleted
    free(cur);                      //memory of the structure cur is deallocated
}

void reverselist()    //reverse the linked list
{
    struct node* prev=NULL;
    struct node* cur=head;
    struct node* nxt;
    while(cur!=NULL)
    {
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    head=prev;      //points the head pointer to prev as it the new head or beginning in reverse list
}

int main()
{
    init();

    int ch,element;
    while(1)
    {
        printf("\n1. Insert new item. 2. Delete ele. 3.Print. 4.Insert at pos 5.Make the linked list reverse");
        printf("enter choice of input: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("enter element to list: ");
            scanf("%d",&element);
            Insert(element);
        }
        else if(ch==2)
        {
            int de;
            printf("enter element to delete ");
            scanf("%d",&de);
            DeleteAtPos(de);
        }
        else if(ch==3)
        {
            PrintList();
        }
        else if(ch==4)
        {
            int ie,p;
            printf("enter element to insert: ");
            scanf("%d",&ie);
            printf("enter after which element to insert: ");
            scanf("%d",&p);
            InsertAtPos(ie,p);
        }
        else if(ch==5)
        {
            reverselist();
        }
    }
    return 0;
}
