#include<stdio.h>
main()
{
	int year;
	printf("Enter any year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
	}
	if(year%4!=0)
	{
		printf("not a leap year");
	}
}