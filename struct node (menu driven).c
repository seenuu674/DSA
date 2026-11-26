
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* create(int n)
{
    int i, value;
    struct node *head=NULL, *temp, *newnode;

    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter data : ");
        scanf("%d",&value);

        newnode->data=value;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    return head;
}

struct node* insertbeg(struct node *head, int value)
{
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=value;
    newnode->next=head;

    head=newnode;

    return head;
}

struct node* insertmid(struct node *head)
{
    int i, pos, value;
    struct node *newnode, *temp;

    printf("Enter data : ");
    scanf("%d",&value);

    printf("Enter position : ");
    scanf("%d",&pos);

    if(head==NULL || pos<2)
    {
        printf("Invalid position");
        return head;
    }

    temp=head;

    for(i=1; i<pos-1 && temp!=NULL; i++)
    {
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("Invalid position");
        return head;
    }

    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=value;
    newnode->next=temp->next;
    temp->next=newnode;

    return head;
}

struct node* insertend(struct node *head)
{
    int value;
    struct node *newnode, *temp;

    printf("Enter data : ");
    scanf("%d",&value);

    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=value;
    newnode->next=NULL;

    if(head==NULL)
    {
        return newnode;
    }

    for(temp=head; temp->next!=NULL; temp=temp->next);

    temp->next=newnode;

    return head;
}

void disp(struct node *head)
{
    struct node *temp;

    for(temp=head; temp!=NULL; temp=temp->next)
    {
        printf("%d->",temp->data);
    }

    printf("NULL");
}

int main()
{
    struct node *head=NULL;
    int choice, n, value;

    while(1)
    {
        printf("\n\n1. Create");
        printf("\n2. Insert Beginning");
        printf("\n3. Insert Middle");
        printf("\n4. Insert End");
        printf("\n5. Display");
        printf("\n6. Exit");

        printf("\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of nodes : ");
                scanf("%d",&n);
                head=create(n);
                break;

            case 2:
                printf("Enter data : ");
                scanf("%d",&value);
                head=insertbeg(head,value);
                break;

            case 3:
                head=insertmid(head);
                break;

            case 4:
                head=insertend(head);
                break;

            case 5:
                disp(head);
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}

