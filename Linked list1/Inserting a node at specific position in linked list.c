#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void append(int data)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void insert(int pos,int val)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=val;
    if(pos==1)
    {
        newNode->next=head;
        head=newNode;
        return;
    }
    struct node *temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
        
}
void display()
{
    struct node *temp=head;
    printf("Node datas : ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int n,data;
    printf("Enter number of nodes : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter value of node %d : ",i);
        scanf("%d",&data);
        if(data>0)
        {
            append(data);
        }
    }
    int pos,val;
    printf("Enter insert position : ");
    scanf("%d",&pos);
    printf("Enter value of node to insert : ");
    scanf("%d",&val);
    insert(pos,val);
    display();
    return 0;
}
