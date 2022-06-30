#include<stdio.h>
main()
{
	int hours,paid,cost,tcost,tpaid;
	printf("enter the period of time in hours :");
	scanf("%d",&hours);
	printf("cost of every hour:");
	scanf("%d",&cost);
	if(hours<=40)
	{
		paid=hours*cost;
		printf("overtime paid is %d",paid);
	}
	if(hours>40)
	{
		tcost=cost+12;
		tpaid=(hours-40)*tcost+40*cost;
		printf("overtime paid is %d",tpaid);
	}
}