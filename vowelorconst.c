#include<stdio.h>
main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("it is VOWEL");
	}
	else
	{
		printf("\nit is Constant");
	}

}