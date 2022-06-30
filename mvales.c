#include<stdio.h>
main()
{
	int m;
	printf("Enter any value");
	scanf("%d",&m);
	if(m>0)
	{
		printf("n=1");
	}
	else if(m<0)
	{
		printf("n=-1");
	}
	else
	{
		printf("n=0");
	}
}