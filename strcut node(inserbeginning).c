#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* create(int n)
{
	struct node *head=NULL,*temp, *newnode;
	int i,value;
	
	for(i=1; i<=n; i++)
	{
		printf("Enter the data of node :");
		scanf("%d",&value);
		
		newnode=(struct node*)malloc(sizeof(struct node));
		
		newnode->data=value;
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return head;
}

struct node* insertbeg(struct node *head,int value)
{
	struct node *newnode;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=value;
	newnode->next=head;
	
	head=newnode;
	
	return head;
	
}

void disp(struct node *head)
{
	struct node *temp=head;
	
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");

}


int main()
{
	struct node *head=NULL;
	int n,value;
	
	printf("Enter number of node :");
	scanf("%d",&n);
	
	head=create(n);
	
	printf("\nOriginal Linked List:\n");
    disp(head);

    printf("\n\nEnter data to insert at beginning: ");
    scanf("%d", &value);

    head = insertbeg(head, value);

    printf("\nUpdated Linked List:\n");
    disp(head);
	
	
	return 0;
	
}
