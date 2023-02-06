//program of calculator
#include<stdio.h>
int main()
{
	char ch='b';
	float no1,no2,result=0.0;
		// operator display
	printf("\n**** Calculator ****");
	printf("\nEnter the operator \n+.Addition");
	printf("\n-.Subtraction");
	printf("\n*.Multiplication");
	printf("\n/.Division");
	printf("\nEnter the Operation type to perform");
	scanf("%c",&ch);
	
	if(ch=='+'|| ch=='-'|| ch=='*'|| ch=='/')
	{
		printf("\nEnter the first number:");
		scanf("%f",&no1);
		printf("\nEnter the second number:");
		scanf("%f",&no2);
	}
	
	switch(ch)
	{
		case '+':
				result=no1+no2;
				printf("\nAddition of two numbers= %f",result);
		break;
		case '-':
				result=no1-no2;
				printf("\nSubtraction of two numbers=%f",result);
		break;
		case '*':
				result=no1*no2;
				printf("\nMultiplication of two numbers=%f",result);
		break;
		case '/':
				result=no1/no2;
				printf("\nDivision of two numbers=%f",result);
		break;
		default:
				printf("\nOperation invalid");
			break;
				
	}
	return 0;
		
}