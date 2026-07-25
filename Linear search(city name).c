#include<stdio.h>
#include<string.h>
void accept(char a[][20],int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("Enter the city name :");
		scanf("%s",a[i]);
	}
}
void search(char a[][20],int n,char cname[])
{
	int i;
	for(i=0; i<n; i++)
	{
		if(strcmp(a[i],cname)==0)
		{
			printf("city name=%s",cname);
			break;
		}
	}
	if(i==n)
	{
		printf("record not found");
	}
}
void main()
{
	int n,i;
	char cname[20],a[10][20];
	printf("Enter the limit :");
	scanf("%d",&n);
	
	accept(a,n);
	
	printf("Enter city to search :");
	scanf("%s",cname);
	
	search(a,n,cname);
}
