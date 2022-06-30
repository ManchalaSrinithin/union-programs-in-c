#include<stdio.h>
main()
{
	int a=1,n,rem,rev;
	printf("palindrome number in blw 1 to 1000\n");
	while(a<=1000)
	{
	n=a;
	rev=0;
		while(n>0)
		{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		}
	if(rev==a)
	{
		printf("\n%d",rev);
		a++;
	}
	}
}