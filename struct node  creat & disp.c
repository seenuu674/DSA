#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data; 
	struct node *next;
};

int main()
{
	struct node *head=NULL, *temp, *newnode;
	int n,i;
	
	printf("Enter the number of nodes :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		
		printf("Enter the data :");
		scanf("%d",&newnode->data);
		
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
	
	printf("\n LINKED LIST :");
	
	temp=head;
	
	while(temp !=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
	return 0;
}
