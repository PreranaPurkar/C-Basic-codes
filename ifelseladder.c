//program for taking a five subject marks and calculate their total & percentage.
#include<stdio.h>
void main()
{
	int phy,math,chem,zoo,bio;
	float total=0.0, perc=0.0;
	// Display the 5 subject marks
	
	printf("\nEnter the marks of Physics");
	scanf("%d",&phy);
	printf("\nEnter the marks of Math");
	scanf("%d",&math);
	printf("\nEnter the marks of Chemistry");
	scanf("%d",&chem);
	printf("\nEnter the marks of Zoology");
	scanf("%d",&zoo);
	printf("\nEnter the marks of Biology");
	scanf("%d",&bio);
	//Calculating the total and percentage of marks
	total=phy+math+chem+zoo+bio;
	printf("\nTotal marks=%f",total);
	perc=total/5;
	printf("\nPercentage=%f",perc);
	
	if(perc>=35 && perc<55)
	{
		printf("\nStudent is pass with D grade");
	}
	else if(perc>=55 && perc<65)
	{
		printf("\nStudent is pass with C grade");
	}
	else if(perc>=65 && perc<75)
	{
		printf("\nStudent is pass with B grade");
	}
	else if(perc>=75 && perc<85)
	{
		printf("\nStudent is pass with A grade");
	}
	else if(perc>=85 && perc<100)
	{
		printf("\nStudent is pass with A+ grade");
	}
	else
	{
		printf("\nStudent is Fail");
	}
							
	
	return 0;
}