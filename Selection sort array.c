#include<stdio.h>
void main()
{
	int step,i,n,a[100],temp=0,index=0,min=0;
	
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the array Element :");
	for(step=0; step<n; step++)
	{
		scanf("%d",& a[step]);
	}
	for(step=0; step<n; step++)
	{
		min=a[step];
		index=step;
		for(i=step; i<n; i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				index=i;
			}
		}
		temp=a[step];
		a[step]=a[index];
		a[index]=temp;
	}
	printf("\n Display sorted array :");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
