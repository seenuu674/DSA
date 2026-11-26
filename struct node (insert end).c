#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

struct node* create(int n)
{
	struct node *head=NULL, *temp, *newnode;
	int i,value;
	
	for(i=1; i<=n; i++)
	{
		printf("Enter data of node :");
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


struct node* insertend(struct node *head)
{
	int i,value;
	struct node *newnode, *temp;
	
	printf("\n Enter data :");
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

int main ()
{
	struct node *head=NULL;
	int n;
	
	printf("Enter the number of nodes :");
	scanf("%d",&n);
	
	head=create(n);
	
	printf("\n Original List :");
	disp(head);
	
	head=insertend(head);
	
	printf("\n Updated List :");
	disp(head);
	
	return 0;
}
