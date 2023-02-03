//Program for Menu card
#include<stdio.h>
int main()
{
	int order;
	// Menu display
	printf("\nEnter the Menu\n1.Ice Cream \n2.Pestries \n3.Cone \n4.Coffee\n5.Exit");
	printf("\nEnter your order number");
	scanf("%d",&order);
	
	if(order==1)
	{
		printf("\nYour order is Ice cream with Price 25 Rs.");
	}
    else if(order==2)
    {
    	printf("\nYour order is Pestries with Price 45 Rs.");
	}
  	else if(order==3)
  	{
  		printf("\nYour order is Cone with Price 70 Rs.");
    }
    else if(order==4)
    {
    	printf("\nYour order is Coffee with Price 30 Rs.");
	}
	else if(order==5)
	{
		
		printf("BYE.....");
		printf("Thank you for comming my Restaurant");
	}
	else
	{
		printf("Invalid order");
		
	}
	return 0;
}