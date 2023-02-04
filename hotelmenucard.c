#include<stdio.h>
int main()
{
	int qty,order,bill;
	float discount=0.0,netbill=0.0;
	printf("***** Menu Card *****");
	printf("\nEnter the Menu\n1.Ice Cream \n2.Pestries \n3.Cone \n4.Coffee\n5.Exit");
	printf("\nEnter your order number");
	scanf("%d",&order);
	if(order>=1 && order<=4)
	{
		printf("Enter the qty of menu Item");
		scanf("%d",&qty);
	}
		switch(order)
	 {
	 	case 1:
		printf("\nYour order is Ice cream with Price 25 Rs.");
		bill=qty*25;
		printf("\nYour bill=%d",bill);
		break;
		case 2:
    	printf("\nYour order is Pestries with Price 45 Rs.");
    	bill=qty*45;
    	printf("\nYour bill =%d",bill);
    	break;
  		case 3:
  	 	printf("\nYour order is Cone with Price 70 Rs.");
  		bill=qty*70;
  		printf("\nYour bill = %d",bill);
    	break;
		case 4:
       	printf("\nYour order is Coffee with Price 30 Rs.");
    	bill=qty*30;
    	printf("\nYour bill=%d",bill);
    	break;
		case 5:
		printf("BYE.....");
		printf("\nThank you for visit  my Hotel");
		break;
		default:
		printf("\nInvalid order");
		break;
	}

	if(bill>=200)
	{
		discount=bill*0.10;
		printf("\nHurray !!! You got Discount =%f",discount);
		netbill=bill-discount;
		printf("\nYour bill =%f",netbill);
	}
	else 
	{
		printf("\nSorry!!! You are not applicable for Discount ");
	}

	return 0;

}
