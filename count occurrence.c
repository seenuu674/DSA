#include<stdio.h>

int Search(int a[],int n, int key)
{
	int i,cnt=0;
	for(i=0; i<n; i++)
	{
		if(a[i]==key)
		{
			cnt++;
		}
	}
	return cnt;
}
void main()
{
	int a[20],i,n,key,cnt;
	
	printf("Enter the limit :");
	scanf("%d",&n);
	
	printf("Enter the %d element :",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key to count :");
	scanf("%d",&key);
	
	cnt=Search(a,n,key);
	printf("Occurrences of a key=%d",cnt);
}
