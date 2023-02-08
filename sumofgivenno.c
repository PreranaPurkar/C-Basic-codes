//Program to print sum of all digits
#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(n=sum)
	{
		printf("Sum of given number=%d",sum);
	}
	
	return 0;
	
}