#include<stdio.h>
struct student
{
	int sno;
	char sname[20];
	float per;
};
struct student s1[50];
void accept(int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter the student no. :");
		scanf("%d",&s1[i].sno);
		printf("Enter the student name :");
		scanf("%s",s1[i].sname);
		printf("Enter the student percentage :");
		scanf("%f",&s1[i].per);
		printf("\n");
	}
}
void disp(int rno)
{
	int i,n;
	for(i=0; i<n; i++)
	{
		if(s1[i].sno==rno)
		{
			printf("\n student name=%s",s1[i].sname);
			printf("\n student percentage=%f",s1[i].per);
			break;
		}
	}
	if(i==n)
	{
		printf(" record not found ");
	}
}
void main()
{
	int n,rno;
	printf("Enter the limit :");
	scanf("%d",&n);
	
	accept(n);
	
	printf("Enter roll number to search :");
	scanf("%d",&rno);
	
	disp(rno);
}
