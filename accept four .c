#include<stdio.h>
main()
{
	int p,q,r,s;
	printf("Accept four integer values");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	if(r>0&&s>0&&p%2==0&&q>r&&s>p&&(s+p)>(p+q))
	{
		printf("correct values");
	}
	else
	{
		printf("Wrong values");
	}
}