#include<stdio.h>
#include<conio.h>
void main()
{
	int math,eng,phy,bio,chem,total,xyz;
	float per;
	clrscr();
	printf("XYZ=%d",xyz);
	printf("Enter the subject marks");
	scanf("%d%d%d%d%d",&math,&eng,&phy,&bio,&chem);
	total=math+eng+phy+bio+chem;
	printf("\nTotal marks:%d",total);
	per=(float)total/5;
	printf("\npercentage:%f",per);
	getch();
}

