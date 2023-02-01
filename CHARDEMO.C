#include<stdio.h>
#include<conio.h>
void main()
{
	char gender='m';
	clrscr();
	printf("Enter your Gender(m for male/f for female):");
	scanf("%c",&gender);
	printf("\nGender=%c",gender);
	if(gender=='m')
	{
		printf("\nYour Gender is Male");
	}
	else
	{
		printf("\nYour Gender is Female");
	}
	getch();
}