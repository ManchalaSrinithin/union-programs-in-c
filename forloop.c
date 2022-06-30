#include<stdio.h>
main()
{
    long long int i=1,fact=1,n;
	printf("Enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%lld",fact);
}