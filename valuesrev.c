#include<stdio.h>
main()
{
	int i,k;
	printf("Enter any n value");
	scanf("%d",&i);
	printf("Enter k value");
	scanf("%d",&k);
	while(i>=k)
	{
		printf("\ni=%d",i);
		i--;
	}

}