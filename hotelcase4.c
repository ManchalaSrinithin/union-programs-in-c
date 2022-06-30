#include<stdio.h>
int hotel(int np);
main()
{
	int amt,s,ta,np;
	char ch,t,l,d;
	printf("--------------------");
	printf("\nOrder Menu:");
	printf("t-tiffin");
	printf("\n1.Idly");
	printf("\n2.dosa");
	printf("\n3.wada");
	printf("l-lunch");
	printf("\n1.full meals");
	printf("\n2. veg full meals");
	printf("\n3.non veg full meals");
	printf("s-snacks");
	printf("\n1.veg manchuria");
	printf("\n2.noodles");
	printf("\n3.chicken wings pack four");
	printf("d-dinner");
	printf("\n1.chicken biryani");
	printf("\n2.butter masala");
	printf("\n3.tandoori chicken");
	printf("\nEnter the type of food:");
	scanf("%c",&ch);
	printf("\n Enter the item you want to order:");
	scanf("%d",&s);
	printf("-------------------------");
	switch(ch)
	{
		case 't':switch(s)
		{
		
				case 1:
				ta=tidly(np);
				printf("Total amount=%d",ta);
				break;
				
				case 2:
				ta=tdosa(np);
				printf("Total amount=%d",ta);
				break;
		
				case 3:
				ta=twada(np);
				printf("Total amount=%d",ta);
				break;
		}
		break;
	
			case 'l':switch(s)
			{
			
				case 1:
				ta=lfull(np);
				printf("\nTotal amount=%d",ta);
				break;
				case 2:
				ta=lveg(np);
				printf("\nTotal amount=%d",ta);
				break;
				case 3:
				ta=lnon(np);
				printf("\nTotal amount=%d",ta);
				break;
			}
		break;
		case 's':switch(s)
			{
			
				case 1:
				ta=sman(np);
				printf("\nTotal amount=%d",ta);
				break;
				case 2:
				ta=nodl(np);
				printf("\nTotal amount=%d",ta);
				break;
		
				case 3:
				ta=chwi(np);
				printf("\nTotal amount=%d",ta);
				break;
			}	
		 break;
		case 'd':switch(s)
		{
		
				case 1:
				ta=chib(np);
				printf("\nTotal amount=%d",ta);
				break;
				case 2:
				ta=pbm(np);
				printf("\nTotal amount=%d",ta);
				break;
				case 3:
				ta=tac(np);
				printf("\nTotal amount=%d",ta);
				break;
		}
		break;
	}
	printf("\nThank you Visit again");
	printf("\n----------------------------");		
}	
int tidly(np)
{
				int amt;
				printf("\nYou have selected IDlY");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*20;
				return amt;
				
}
int tdosa(np)
{
				int amt;
				printf("\nYou have selected DOSA");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*30;
				printf("Total amount=%d",amt);	
				return amt;
}
		
int twada(np)
{
		int amt;
				printf("\nYou have selected WADA");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*25;
				printf("Total amount=%d",amt);
					return amt;
}
int lfull(np)
{
				int amt;
				printf("\nYou have selected full meals");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*200;
				printf("\nTotal amount=%d",amt);
					return amt;
}
int lveg(np)
{

				int amt;
				printf("\nYou have selected veg full meals");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*170;
				printf("\nTotal amount=%d",amt);
					return amt;
}
	int lnon(np)
			{
					int amt;	
				printf("\nYou have selected non-veg full meals");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*250;
				printf("\nTotal amount=%d",amt);
				return amt;
			}
			int sman(np)
			{
			
				int amt;
				printf("\nYou have selected veg manchuria");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*70;
				printf("\nTotal amount=%d",amt);
				return amt;
			}
				int nodl(np)
				{
				int amt;
				printf("\nYou have selected noodles");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*80;
				printf("\nTotal amount=%d",amt);
				return amt;
				}
		int chwi(np)	
			{
					int amt;
				printf("\nYou have selected chicken wings 4 pack");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*450;
				printf("\nTotal amount=%d",amt);
					return amt;
			}	
			int chib(np)
			{
		
					int amt;
				printf("\nYou have selected chicken biryani");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*200;
				printf("\nTotal amount=%d",amt);
					return amt;
			}
				int pbm(np)
				{
				
					int amt;
				printf("\nYou have selected panner butter masala");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*300;
				printf("\nTotal amount=%d",amt);
					return amt;
				}
				int tac(np)
				{
				int amt;
				printf("\nYou have selected tandoori chicken");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*225;
				printf("\nTotal amount=%d",amt);
				return amt;
				}