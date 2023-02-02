#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	{
	printf("\nA is big number");
	}
	else
	{
		if(b>=a && b>=c)
		{
		printf("\n B is big number");
		}
		else
		{
		printf("\nC is big number");
		}
	}
getch();
}