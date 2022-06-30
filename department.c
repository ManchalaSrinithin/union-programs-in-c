#include<stdio.h>
main()
{
	int d,ne,sal;
	printf("Enter 1 for CSE");
	printf("Enter 2 for ECE");
	printf("Enter 3 for EEE");
	printf("Enter 4 for Civil");
	printf("Enter your department:");
	scanf("%d",&d);
	switch (d)
	{
		case 1:
		printf("Enter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in CSE department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("cse-Total salary of the employees:%d",sal);
		break;
		case 2:
		printf("Enter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in ECE department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("ECE-Total salary of the employees:%d",sal);
		break;
		case 3:
		printf("Enter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in EEE department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("EEE-Total salary of the employees:%d",sal);
		break;
		case 4:
		printf("Enter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in Civil Department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("Civil-Total salary of the employees:%d",sal);
		break;
		
		
	}
}