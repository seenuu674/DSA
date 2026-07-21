#include<stdio.h>

struct student
{
	int rno;
	char name[25];
	float per;
}s1[25];
int num;
void accept ()
{
	int i;
	for(i=0; i<num; i++)
	{
		printf("Enter the student roll number :");
	    scanf("%d",&s1[i].rno);
	    
	    printf("Enter the student percentage :");
	    scanf("%f",&s1[i].per);
	    
	    printf("Enter the student name :");
	    scanf("%s",s1[i].name);
	}
	
}
void maximum()
{
	int i,max;
	max=s1[0].per;
	for(i=0; i<num; i++)
	{
		if(s1[i].per>max)
		{
			max=s1[i].per;	
		}	
	}
	printf("Maximum percentage=%d",max);	
}
void main ()
{
	printf("Enter the number :");
	scanf("%d",&num);
	accept ();
	maximum ();
}

