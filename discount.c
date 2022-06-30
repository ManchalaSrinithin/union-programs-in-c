#include<stdio.h>
main()
{
	char t;
	int amt;
	printf("Enter the type of cloth millcloth('m') and handloom('h'):");
	scanf("%c",&t);
	printf("Enter the amount:");
	scanf("%d",&amt);
	if(t=='m')
	{
		if(amt>0&&amt<=100)
		{
		printf("Total amount=%d",amt);
		}
		else if(amt>100&&amt<=200)
		{	
		printf("Total amount=%d",amt);
		}
		else if(amt>200&&amt<=300)
		{
		amt=amt-(amt*0.075);
		printf("Total amount=%d",amt);
		}
		else
		{
		amt=amt-(amt*0.1);	
		printf("Total amount=%d",amt);
		}
	}
	if(t=='h')
	{
		if(amt>0&&amt<=100)
		{
			amt=amt-(amt*0.05);
		printf("Total amount=%d",amt);
		}
		else if(amt>100&&amt<=200)
		{
		amt=amt-(amt*0.075);	
		printf("Total amount=%d",amt);
		}
		else if(amt>200&&amt<=300)
		{
		amt=amt-(amt*0.1);
		printf("Total ammount=%d",amt);
		}
		else
		{
		amt=amt-(amt*0.15);	
		printf("Total amount=%d",amt);
		}
	}		
}