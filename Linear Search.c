#include<stdio.h>
void LinearSearch(int n,int a[],int key)
{
	int i,flag=0;
	for(i=0; i<n; i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("key found");
	}
	else
	{
		printf("key not found");
	}
}
void main()
{
	int a[30],n,key,i;
	printf("Enter the limit :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter the Element :");
		scanf("%d",&a[i]);
	}
	printf("Enter key to search :");
	scanf("%d",&key);
	
	LinearSearch(n,a,key);
}
