#include<stdio.h>
#include<math.h>
main()
{
	int n,x,sum=0;
	printf("Enter any Number:");
	scanf("%d",&n);
	x=n/10000;
	x=x%10;
	while(n>0)
	{
		sum=(n%10)+sum;
		n=n/10;
	}
	sum=sum-x;
	if(pow(x,3)==sum)
	{
		printf("\nvaild");
	}
	else
	{
		printf("\nNot valid");
	}
}