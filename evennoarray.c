//Program to print the even number
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("\nEnter the five numbers");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		{

			printf("\nEven no is=%d",a[i]);
		}
	}
	return 0;
	
}