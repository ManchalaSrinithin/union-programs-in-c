#include<stdio.h>
main()
{
	int unit;
	char name[20];
	float amt,tamt;
	printf("Name of the user:");
	scanf("%s",&name);
	printf("\nEnter total units consumed:");
	scanf("%d",&unit);
	if(unit>0&&unit<=200)
	{
		amt=100+unit*0.80;
		printf("total amount=%f",amt);
	}
	else if(unit>200&&unit<=300)
	{
		amt=100+unit*0.90;
		printf("total amount=%f",amt);
		
	}
	else if(unit>300&&unit<=400)
	{
		amt=100+unit*1;
		printf("total amount=%f",amt);
	}
	else
	{
		amt=100+unit*1;
		tamt=amt+0.15*amt;
		printf("total amount includung subcharge of 15percent of the total amount =%f",tamt);
	}
	
}