#include<stdio.h>
#include<stdlib.h>

struct employee
{
	int eno;
	char ename[25];
	float sal;
};
struct employee *e1;
void accept ()
{
	printf("Enter the employee number :");
	scanf("%d",&e1->eno);
		
	printf("Enter the employee name :");
	scanf("%s",e1->ename);
	
	printf("Enter the  employee salary :");
	scanf("%f",&e1->sal);

}
void disp ()
{
	printf("\n Employee number =%d",e1->eno);
	printf("\n Employee Name   =%s",e1->ename);
	printf("\n Employee Salary =%f",e1->sal);
	
}
int main()
{
	e1=(struct employee*)malloc(sizeof(struct employee));
	accept();
	disp();
	free(e1);
	return 0;
}
