#include<stdio.h>
main()
{
	int m;
	printf("Enter any number between 1 to 12:");
	scanf("%d",&m);
	switch(m)
	{
		case 1:printf("\n Month of the Year :January");
		break;
		case 2:printf("\n Month of the Year :february");
		break;
		case 3:printf("\n Month of the Year :March");
		break;
		case 4:printf("\n Month of the Year :April");
		break;
		case 5:printf("\n Month of the Year :May");
		break;
		case 6:printf("\n Month of the Year :June");
		break;
		case 7:printf("\n Month of the Year :July");
		break;
		case 8:printf("\n Month of the Year :August");
		break;
		case 9:printf("\n Month of the Year :September");
		break;
		case 10:printf("\n Month of the Year :October");
		break;
		case 11:printf("\n Month of the Year :November");
		break;
		case 12:printf("\n Month of the Year :December");
		break;
	}
}