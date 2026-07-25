#include<stdio.h>
void accept(int n, int a[])
{
	int i,b[50];
	for(i=0; i<n; i++)
	{
		b[i]=a[i]*a[i];
	}
	printf("square of array :");
	for(i=0; i<n; i++)
	{
		printf("	%d",b[i]);
	}
}
void main()
{
	int i,n,a[50];
	printf("Enter the limit :");
	scanf("%d",&n);
	
	printf("Enter the array element :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);	
	}
	 accept(n,a);
}
