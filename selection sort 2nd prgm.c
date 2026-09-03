#include<stdio.h>
void main ()
{
	int n,step,i,a[100],index,temp,min;
	
	printf("Enter the limit :");
	scanf("%d",&n);
	
	printf("Enter the array element :");
	for(step=0; step<n; step++)
	{
		scanf("%d",&a[step]);
	}
	  for(step=0; step<n; step++)
	  {
		 min=a[step];
		 index=step;
	    for(i=step+1; i<n; i++)
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
	printf("\n Display arrray :");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
