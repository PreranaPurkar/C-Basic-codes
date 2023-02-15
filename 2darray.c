//write a program for 2D Array
#include<stdio.h>
int main()
{
	int a[2][2],r,c;
	printf("Enter the 2X2 Matrix:");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	return 0;

}