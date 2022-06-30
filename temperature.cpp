#include<stdio.h>
main()
{
	float temp;
	printf("enter temperature:");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("freezing temperature");
	}
	else if(temp>=0&&temp<10)
	{
		printf("very cold temperature");
	}
	else if(temp>=10&&temp<20)
	{
		printf("cold temperature");
	}
	else if(temp>=20&&temp<30)
	{
		printf("Normal in temperature");
	}
	else if(temp>=30&&temp<40)
	{
		printf("its hot");
	}
	else
	{
		printf("its very hot");
	}
}