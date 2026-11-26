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
		 printf(" Enter data :");
		 scanf("%d",&value);
		 
		 newnode=(struct node*)malloc(sizeof(struct node));
		 
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

struct node* insertmid(struct node *head)
{
	int i,value,pos;
	struct node *newnode,*temp;
	
	printf("\n Enter data :");
	scanf("%d",&value);
	
	printf("\n Enter position :");
	scanf("%d",&pos);
	
	newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=value;
	temp=head;
	
	for(i=1; i<pos-1; i++)
	{
		temp=temp->next;
	}
		
		newnode->next=temp->next;
		temp->next=newnode;
		return head;
}

void disp(struct node *head)
{
	struct node *temp;
	
	for(temp=head; temp!=NULL; temp=temp->next)
	printf("%d->",temp->data);
	
	printf("NULL");
}

int main ()
{
	struct node *head=NULL, *temp, *newnode;
	
	int n;
	
	printf("Enter number of node :");
	scanf("%d",&n);
	
	head=create(n);
	
	printf("\n Original Linked list :");
	disp(head);
	
	head=insertmid(head);
	
	printf("\n Updated linked list :");
	disp(head);
	
	return 0;
}
