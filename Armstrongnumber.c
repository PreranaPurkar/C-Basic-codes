//Write a program to print Armstrong number
#include<stdio.h>
int main()
{
	int n,n1,r,sum=0,cube;
	printf("\nEnter the number");
	scanf("%d",&n);
		n1=n;
		while(n>0)
		{	
			r=n%10;
			cube=r*r*r;
			sum=sum+cube;
			n=n/10;
		}
		if(sum==n1)
		{
		printf("\nNumber is Armstrong = %d",n1);
		}
		else
		{
			printf("\nNumber is not 
			Armstrong = %d",n1);
		}
	return 0;
}