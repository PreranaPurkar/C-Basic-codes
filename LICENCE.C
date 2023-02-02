#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char gender;
	clrscr();
	printf("\nEnter the gender(m/f)");
	scanf("%c",&gender);
	printf("\nEnter the Age");
	scanf("%d",&age);
	if(gender=='m')
	{
		if(age>=18)
		{
			printf("\nDriving allowed for Male");
		}
		else
		{
			printf("\nDriving not allowed for Male");
		}
	}
	else
	{
		if(age>=22)
		{
			printf("\nDriving allowed for Female");
		}
		else
		{
			printf("\nDriving not allowed for Female");
		}
	}
	getch();
}