#include<stdio.h>
main()
{
	int x;
	printf("Enter any value:");
	scanf("%d",&x);
	if(x>0)
	{
		printf("\n1");
	}
	else if(x=0)
	{
		printf("\n0");
	}
	else
	{
		printf("\n-1");
	}
}