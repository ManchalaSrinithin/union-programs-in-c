#include<stdio.h>
main()
{
	int a;
	printf("enter any value:");
	scanf("%d",&a);
	if(a>0&&a%2==0)
	{
		printf("positive even");
	}
	else if(a<0&&a%2==0)
	{
		printf("Negative even");
	}
	else if(a>0&&a%2!=0)
	{
		printf("positive odd");
	}
	else if(a<0&&a%2!=0)
	{
		printf("Negative odd");
	}
	else
	{
		printf("even");
	}
}