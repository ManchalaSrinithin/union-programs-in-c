#include<stdio.h>
main()
{
	float salary,newsalary,bonus;
	char ch;
	printf("gender:");
	scanf("%c",&ch);
	printf("enter his salary");
	scanf("%f",salary);
	if(ch=='m')
	{
		bonus=0.05*salary;
		newsalary=bonus+salary;
	}
	else
	{
		bonus=0.1*salary;
		newsalary=bonus+salary;
	}
		printf("New salary of the employee is %f",newsalary);
}