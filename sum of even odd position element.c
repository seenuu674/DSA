#include<stdio.h>
void evensum(int n,int a[])
{
	int i,s=0;
	for(i=0; i<n; i++)
	{
		if(i%2==0)
		{
			s=s+a[i];
		}
	}
	printf("sum of even position element=%d",s);
}
 void oddsum(int n,int a[])
{
	int i,s=0;
	for(i=0; i<n; i++)
	{
		if(i%2==1)
		{
			s=s+a[i];
		}
	}
	printf("sum of odd position element=%d",s);
}
void main()
{
	int i,n,a[100];
	char ch;
	
	printf("Enter the limit :");
	scanf("%d",&n);
	
	printf("Enter the array element :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}	
	do
	{
		printf("\n 'A': sum of even position element ");
		printf("\n 'B': sum of odd position element ");
		printf("\n 'C': Exit ");
		
		printf("\n Enter your choise :");
		scanf(" %c",&ch);
		
	 switch(ch)
	 {
	 	case 'A':
	 		{
	 			evensum(n,a);
	 			break;
			}
		case 'B':
			{
				oddsum(n,a);
				break;
			}
		case 'C':
			{
				printf("Exit program ");
				break;
			}
		default:
			printf("Invalide  choise ");
	 }
	}
	while(ch!='C');
}
