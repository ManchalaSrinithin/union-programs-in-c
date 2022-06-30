#include<stdio.h>
main()
{
	int f1,f2,sum,i=1,n;
	printf("Enter any number:");
	scanf("%d%d",&f1,&f2);
	while(i<=n)
	{
		sum=f1+f2;
		printf("%4d",sum);
		f1=f2;
		f2=sum;
		i++;
	}
}