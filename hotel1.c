#include<stdio.h>
main()
{
	int amt,np,s;
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
				printf("\nYou have selected IDlY");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*20;
				printf("Total amount=%d",amt);
				break;
				
				case 2:
				printf("\nYou have selected DOSA");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*30;
				printf("Total amount=%d",amt);
				break;
		
				case 3:
				printf("\nYou have selected WADA");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*25;
				printf("Total amount=%d",amt);
				break;
		}
		break;
	
			case 'l':switch(s)
			{
			
				case 1:
				printf("\nYou have selected full meals");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*200;
				printf("\nTotal amount=%d",amt);
				break;
				case 2:
				printf("\nYou have selected veg full meals");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*170;
				printf("\nTotal amount=%d",amt);
				break;
				case 3:
				printf("\nYou have selected non-veg full meals");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*250;
				printf("\nTotal amount=%d",amt);
				break;
			}
		break;
		case 's':switch(s)
			{
			
				case 1:
				printf("\nYou have selected veg manchuria");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*70;
				printf("\nTotal amount=%d",amt);
				break;
				case 2:
				printf("\nYou have selected noodles");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*80;
				printf("\nTotal amount=%d",amt);
				break;
		
				case 3:
				printf("\nYou have selected chicken wings 4 pack");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*450;
				printf("\nTotal amount=%d",amt);
				break;
			}	
		 break;
		case 'd':switch(s)
		{
		
				case 1:
				printf("\nYou have selected chicken biryani");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*200;
				printf("\nTotal amount=%d",amt);
				break;
				case 2:
				printf("\nYou have selected panner butter masala");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*300;
				printf("\nTotal amount=%d",amt);
				break;
				case 3:
				printf("\nYou have selected tandoori chicken");
				printf("\nEnter the no of plates:");
				scanf("%d",&np);
				amt=np*225;
				printf("\nTotal amount=%d",amt);
				break;
		}
		break;
	}
	printf("\nThank you Visit again");
	printf("\n----------------------------");		
}	
