#include<stdio.h>
void replc(int n, int a[], int num, int r)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			a[i]=r;
		}
	}
	printf("Replace :");
	for(i=0; i<n; i++)
	{
		printf("  %d",a[i]);
	}
}
void main()
{
	int i,n,a[100],num,r;
	
	printf("Enter the limit :");
	scanf("%d",&n);
	
	printf("Enter the array element :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to find :");
	scanf("%d",&num);
	
	printf("Enter the number to replace :");
	scanf("%d",&r);
	
	replc(n,a,num,r);
}
