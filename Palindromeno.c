//Program to check given number is palindrome or not
int main()
{
	int n,n1,r,s=0;
	printf("Enter the number");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==n1)
	{
		printf("Number is Palindrome",n1);
	}
	else
	{
		printf("Number is not Palindrome",n1);
	}
	return 0;
}