#include<stdio.h>
#include<string.h>
struct emp
{
	int e_no;
	char e_name[20];
	float salary;
}e1[20],temp;
void main ()
{
	int n,i,step;
	
	printf("Enter the limit :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter the employee number :");
		scanf("%d",&e1[i].e_no);
		
		printf("Enter the employee name :");
		scanf("%s",e1[i].e_name);
		
		printf("Enter the employee salary :");
		scanf("%f",&e1[i].salary);
	}
	
	for(step=1; step<n; step++)
	{
		for(i=0; i<n; i++)
		{
			if(strcmp(e1[i].e_name,e1[i+1].e_name)<0)
			{
				temp=e1[i];
				e1[i]=e1[i+1];
				e1[i+1]=temp;
			}
		}
	}
	printf("\n Sorted Employee Information :");
	for(i=0; i<n; i++)
	{
		printf("\n Employee number :%d",e1[i].e_no);
		printf("\n Employee name :%s",e1[i].e_name);
		printf("\n Employee salary :%f",e1[i].salary);
	}
}
