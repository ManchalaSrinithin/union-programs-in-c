#include<stdio.h>
main()
{
	int x,y;
	printf("enter x coordinate:");
	scanf("%d",&x);
	printf("enter y coordinate");
	scanf("%d",&y);
	if(x>0&&y>0)
	{
		printf("first quadrant");
	}
	else if(x<0&&y>0)
	{
		printf("second quadrant");
	}
	else if(x<0&&y<0)
	{
		printf("third quadrant");
	}
	else if(x>0&&y<0)
	{
		printf("fourth quadrant");
	}
	else
	{
		printf("orgin");
	}
}