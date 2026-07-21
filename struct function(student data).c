#include<stdio.h>

struct student
{
	int no;
	char name[20];
	float per;
}s1;
void accept ()
{
	printf("Enter the Roll Number :");
	scanf("%d",&s1.no);
	
	printf("Enter the percentage :");
	scanf("%f",&s1.per);
	
	printf("Enter the name :");
	scanf("%s",s1.name);
	
}
void display ()
{
	printf("\n Student Roll number =%d",s1.no);
	printf("\n Student name =%s",s1.name);
	printf("\n Student percentage =%f",s1.per);
	
}
int main ()
{
	accept ();
	display ();
	return 0;
}
