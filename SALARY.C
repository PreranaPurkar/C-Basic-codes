#include<stdio.h>
#include<conio.h>
void main()
{
	int wday;
	float sal,taxamt,empsal;
	clrscr();
	printf("\nEnter the Wage per day");
	scanf("%d",&wday);
	sal=wday*30;
	printf("\nMonth of Wage=%f",sal);
	taxamt=sal*12/100;
	printf("\nTaxamt=%f",taxamt);
	empsal=sal-taxamt;
	printf("\nInhand Salary=%f",empsal);
	getch();
}