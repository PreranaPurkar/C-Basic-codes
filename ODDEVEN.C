#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter the Number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\nEven no");
	}
	else
	{
		printf("\nOdd no");
	}
	getch();
}