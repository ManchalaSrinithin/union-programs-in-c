#include<stdio.h>
main()
{
	int s1,s2,s3,s4,avg,tot;
	printf("enter any four subject marks:");
	scanf("%d%d%d%d",&s1,&s2,&s3,s4);
	tot=s1+s2+s3+s4;
	avg=tot/4;
	printf("average marks=%d",avg);
	if(avg>=50&&avg<60)
	{
		printf("grade5");
	}
	if(avg>=60&&avg<70)
	{
		printf("grade4");
	}
	if(avg>=70&&avg<80)
	{
		printf("grade3");
	}
	if(avg>=80&&avg<90)
	{
		printf("grade2");
	}
	if(avg>=90)
	{
		printf("grade1");
	}
}
