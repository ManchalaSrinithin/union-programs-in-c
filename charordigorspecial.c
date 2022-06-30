#include<stdio.h>
main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("it is upper case character");
	}
	else if(ch>=97&&ch<=122)
	{
		printf("it is lower case character");
	}
	else if(ch>=48&&ch<=57)
	{
		printf("it is digit");
	}
	else
	{
		printf("it is special character");
	}
}