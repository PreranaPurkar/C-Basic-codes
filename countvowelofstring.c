//write a program of string for count the vowels in the word
#include<stdio.h>
int main()
{
	char str[40];
	int i,count=0;
	printf("\nEnter the string");
	scanf("%S",str);
	//iterate the string
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'|| str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u')
		{
			count++;
		}
	}
	printf("Vowel count=%d\n",count);
	return 0;
	
}