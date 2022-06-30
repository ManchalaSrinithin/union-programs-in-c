#include<stdio.h>
main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		ch=ch+32;
		printf("its lower case character is %c",ch);
	}
	else
	{
		ch=ch-32;
		printf("\nits upper case character is %c",ch);
	}
}