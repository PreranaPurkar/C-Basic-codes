//program to display the array element and print their sum
int main()
{
	int a[5],i,sum=0;
	printf("\nEnter the 5 numbers");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
		sum=sum+a[i];
	}
	printf("\nSum of array element=%d",sum);
	return 0;
}