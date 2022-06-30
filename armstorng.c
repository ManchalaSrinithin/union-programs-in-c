#include<stdio.h>
main()
{
	int a=1,n,n1,rem,s;
	printf("Enter any value:");
	scanf("%d",&n1);
	while(a<=n1)
	{
		n=a;
		s=0;
			while(n>0)
			{
				rem=n%10;
				s=s+rem*rem*rem;
				n=n/10;
			}
		if(s==a)
		printf("\n%d",s);
		a++;
	}
}