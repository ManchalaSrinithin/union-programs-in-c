#include<stdio.h>
main()
{
	int age;
	char h,l,g;
	printf("Enter the age of the person:");
	scanf("%d",&age);
	printf("Enter the gender of the person(male-morfemale-f):");
	scanf("\n%c",&g);
	printf("Enter the Health condition of the person(e-excellentorp-poor):");
	scanf("\n%c",&h);
	printf("Enter the area situated (city-corvillage-v):");
	scanf("\n%c",&l);
	{
		if(g=='m')
		{
			printf(" premium policy amount cannot exceed 2 lakhs");		
		}
		{
		  if(g=='f')
		  
		  	{
			printf("premium policy amount cannot exceed one lakhs");
			}	
		}
		
	}
		if(h=='p'&&age>=25&&age<=35&&l=='v'&&g=='m')
		{
		printf("premium policy amount cannot exceed ten thousand");			
		}
	else
	{
		printf(" not insured");
	}
}