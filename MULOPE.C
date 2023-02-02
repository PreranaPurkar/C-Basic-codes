#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add=0,sub=0,mul=0,div=0;
	clrscr();
	printf("Enter the no of a and b");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("\nAddition of two number is %d ",add);
	sub=a-b;
	printf("\nSubstraction of two number is %d",sub);
	mul=a*b;
	printf("\nMultiplication off two number is %d",mul);
	div=a/b;
	printf("\nDivision of two number is %d",div);
	getch();
}